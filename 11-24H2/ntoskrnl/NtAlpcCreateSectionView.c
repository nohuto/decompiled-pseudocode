/*
 * XREFs of NtAlpcCreateSectionView @ 0x14093DA50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 *     AlpcReferenceBlobByHandle @ 0x1408938D0 (AlpcReferenceBlobByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpCreateSectionView @ 0x14093DC88 (AlpcpCreateSectionView.c)
 */

__int64 __fastcall NtAlpcCreateSectionView(HANDLE Handle, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v7; // rcx
  KPROCESSOR_MODE v8; // r9
  NTSTATUS SectionView; // ebx
  PVOID v10; // r13
  void *v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
    goto LABEL_23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v7 = a3;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 31) = *(_BYTE *)(v7 + 31);
    v17 = *(_OWORD *)a3;
    v18 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    v17 = *(_OWORD *)a3;
    v18 = *(_OWORD *)(a3 + 16);
  }
  if ( (_DWORD)v17 || !*((_QWORD *)&v18 + 1) || (_QWORD)v18 )
  {
LABEL_23:
    SectionView = -1073741811;
  }
  else
  {
    v8 = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, v8, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v10 = Object[0];
      v11 = (void *)AlpcReferenceBlobByHandle(
                      (_QWORD *)(*((_QWORD *)Object[0] + 2) + 40LL),
                      SDWORD2(v17),
                      AlpcSectionType);
      Object[1] = v11;
      if ( v11 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v11, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v14 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v14 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v14);
          }
          else
          {
            v14 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v14 + 48);
          }
          AlpcpDereferenceBlobEx(v14, 1, v12, v13);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v11, 1, v12, v13);
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(v10);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SectionView;
}
