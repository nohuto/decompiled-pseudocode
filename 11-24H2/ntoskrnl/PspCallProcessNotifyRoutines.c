/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x1408F2F68
 * Callers:
 *     PspExitProcess @ 0x1408F2E70 (PspExitProcess.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 ExtensionTable; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r12d
  int v11; // r13d
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 i; // r14
  struct _EX_RUNDOWN_REF *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rsi
  int Count; // eax
  int v21; // eax
  __int64 v22; // rdx
  KSPIN_LOCK *v23; // rcx
  int v24; // eax
  __int128 v25; // xmm0
  char *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // [rsp+20h] [rbp-49h]
  unsigned __int64 v30; // [rsp+28h] [rbp-41h]
  __int64 v31; // [rsp+30h] [rbp-39h]
  __int64 v32; // [rsp+40h] [rbp-29h] BYREF
  int v33; // [rsp+48h] [rbp-21h]
  __int64 v34; // [rsp+50h] [rbp-19h]
  __int128 v35; // [rsp+58h] [rbp-11h]
  PVOID v36; // [rsp+68h] [rbp-1h]
  __int128 v37; // [rsp+70h] [rbp+7h]
  int v38; // [rsp+80h] [rbp+17h]
  char v39; // [rsp+D0h] [rbp+67h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  memset_0(&v32, 0, 0x48uLL);
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v30 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  v10 = 0;
  Object = 0LL;
  v11 = PspNotifyEnableMask & 4;
  v12 = a1[200];
  v13 = v7;
  v29 = v7;
  v39 = 0;
  v14 = 2LL;
  v31 = v12;
  if ( a3 && ((PspNotifyEnableMask & 4) != 0 || ExtensionTable || v7) )
  {
    v24 = 0;
    v32 = 72LL;
    if ( v12 )
      v24 = 2;
    v33 = v24;
    v34 = a1[90];
    v25 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    v38 = 0;
    v35 = v25;
    if ( v12 )
    {
      v36 = 0LL;
      v37 = 0LL;
      if ( a2 )
      {
        v28 = *(_QWORD *)(a2 + 416);
        if ( v28 )
        {
          v36 = *(PVOID *)v28;
          v37 = *(_OWORD *)(v28 + 8);
        }
      }
      goto LABEL_44;
    }
    if ( a2 && (v26 = *(char **)(a2 + 184)) != 0LL )
    {
      Object = *(PVOID *)(a2 + 184);
      v36 = v26;
    }
    else
    {
      PsReferenceProcessFilePointer(a1, &Object);
      v26 = (char *)Object;
      v36 = Object;
      v39 = 1;
      if ( !a2 )
        goto LABEL_48;
    }
    if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
    {
      v33 |= 1u;
      *(_QWORD *)&v37 = a2 + 240;
LABEL_41:
      v27 = *(_QWORD *)(a2 + 216);
      if ( v27 )
      {
        *((_QWORD *)&v37 + 1) = v27 + 112;
LABEL_43:
        v14 = 2LL;
LABEL_44:
        v15 = &v32;
        goto LABEL_3;
      }
LABEL_49:
      *((_QWORD *)&v37 + 1) = 0LL;
      goto LABEL_43;
    }
LABEL_48:
    *(_QWORD *)&v37 = v26 + 88;
    if ( !a2 )
      goto LABEL_49;
    goto LABEL_41;
  }
  v15 = 0LL;
LABEL_3:
  if ( (PspNotifyEnableMask & 2) != 0 || v11 )
  {
    for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
    {
      v18 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v14, v8, v9);
      v19 = v18;
      if ( v18 )
      {
        Count = v18[2].Count;
        if ( !v31 || (Count & 4) != 0 )
        {
          if ( (Count & 2) != 0 )
          {
            if ( v11 )
              guard_dispatch_icall_no_overrides(a1, a1[58]);
          }
          else
          {
            v22 = a1[58];
            v23 = (KSPIN_LOCK *)a1[90];
            if ( (void (__stdcall *)(PKSPIN_LOCK, KIRQL))v19[1].Count == KeReleaseSpinLock )
              KeReleaseSpinLock(v23, v22);
            else
              guard_dispatch_icall_no_overrides(v23, v22);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v19);
        if ( v15 )
        {
          v21 = *((_DWORD *)v15 + 16);
          if ( v21 < 0 )
          {
            v10 = *((_DWORD *)v15 + 16);
            PsTerminateProcess(a1, (unsigned int)v21);
            break;
          }
        }
      }
    }
    ExtensionTable = v30;
    v13 = v29;
  }
  if ( v13 && (!v15 || *((int *)v15 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1, a1[58]);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v15 || *((int *)v15 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1, a1[58]);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v39 )
    ObfDereferenceObject(Object);
  return v10;
}
