/*
 * XREFs of NtAlpcCreateSectionView @ 0x1408B5800
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcReferenceBlobByHandle @ 0x1408AF5B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x1408AF704 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSectionView @ 0x1408B5A38 (AlpcpCreateSectionView.c)
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
  ULONG_PTR v12; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  v15 = 0LL;
  *(_QWORD *)&v16 = 0LL;
  DWORD2(v16) = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
    goto LABEL_22;
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
    v15 = *(_OWORD *)a3;
    v16 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    v15 = *(_OWORD *)a3;
    v16 = *(_OWORD *)(a3 + 16);
  }
  if ( (_DWORD)v15 || !*((_QWORD *)&v16 + 1) || (_QWORD)v16 )
  {
LABEL_22:
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
                      SDWORD2(v15),
                      AlpcSectionType);
      Object[1] = v11;
      if ( v11 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v11, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v12 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v12 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v12);
          }
          else
          {
            v12 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v12 + 48);
          }
          AlpcpDereferenceBlobEx(v12, 1);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v11, 1);
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
