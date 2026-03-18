/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x14091F098
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspExitProcess @ 0x14091EFA0 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsReferenceProcessFilePointer @ 0x14090B800 (PsReferenceProcessFilePointer.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(struct _EX_RUNDOWN_REF *a1, __int64 a2, char a3)
{
  unsigned __int64 ExtensionTable; // r14
  unsigned __int64 v7; // rax
  unsigned int v8; // r12d
  int v9; // r13d
  unsigned __int64 Count; // rcx
  unsigned __int64 v11; // rsi
  __int64 *v12; // rbx
  __int64 i; // r14
  struct _EX_RUNDOWN_REF *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rsi
  int v17; // eax
  int v18; // eax
  KSPIN_LOCK *v19; // rcx
  int v20; // eax
  __int128 v21; // xmm0
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+20h] [rbp-49h]
  unsigned __int64 v26; // [rsp+28h] [rbp-41h]
  unsigned __int64 v27; // [rsp+30h] [rbp-39h]
  __int64 v28; // [rsp+40h] [rbp-29h] BYREF
  int v29; // [rsp+48h] [rbp-21h]
  unsigned __int64 v30; // [rsp+50h] [rbp-19h]
  __int128 v31; // [rsp+58h] [rbp-11h]
  PVOID v32; // [rsp+68h] [rbp-1h]
  __int128 v33; // [rsp+70h] [rbp+7h]
  int v34; // [rsp+80h] [rbp+17h]
  char v35; // [rsp+D0h] [rbp+67h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  memset_0(&v28, 0, 0x48uLL);
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v26 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  v8 = 0;
  Object = 0LL;
  v9 = PspNotifyEnableMask & 4;
  Count = a1[200].Count;
  v11 = v7;
  v25 = v7;
  v35 = 0;
  v27 = Count;
  if ( a3 && ((PspNotifyEnableMask & 4) != 0 || ExtensionTable || v7) )
  {
    v20 = 0;
    v28 = 72LL;
    if ( Count )
      v20 = 2;
    v29 = v20;
    v30 = a1[90].Count;
    v21 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    v34 = 0;
    v31 = v21;
    if ( Count )
    {
      v32 = 0LL;
      v33 = 0LL;
      if ( a2 )
      {
        v24 = *(_QWORD *)(a2 + 416);
        if ( v24 )
        {
          v32 = *(PVOID *)v24;
          v33 = *(_OWORD *)(v24 + 8);
        }
      }
      goto LABEL_43;
    }
    if ( a2 && (v22 = *(char **)(a2 + 184)) != 0LL )
    {
      Object = *(PVOID *)(a2 + 184);
      v32 = v22;
    }
    else
    {
      PsReferenceProcessFilePointer(a1, (__int64 *)&Object);
      v22 = (char *)Object;
      v32 = Object;
      v35 = 1;
      if ( !a2 )
        goto LABEL_47;
    }
    if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
    {
      v29 |= 1u;
      *(_QWORD *)&v33 = a2 + 240;
LABEL_41:
      v23 = *(_QWORD *)(a2 + 216);
      if ( v23 )
      {
        *((_QWORD *)&v33 + 1) = v23 + 112;
LABEL_43:
        v12 = &v28;
        goto LABEL_3;
      }
LABEL_48:
      *((_QWORD *)&v33 + 1) = 0LL;
      goto LABEL_43;
    }
LABEL_47:
    *(_QWORD *)&v33 = v22 + 88;
    if ( !a2 )
      goto LABEL_48;
    goto LABEL_41;
  }
  v12 = 0LL;
LABEL_3:
  if ( (PspNotifyEnableMask & 2) != 0 || v9 )
  {
    for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
    {
      v15 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i);
      v16 = v15;
      if ( v15 )
      {
        v17 = v15[2].Count;
        if ( !v27 || (v17 & 4) != 0 )
        {
          if ( (v17 & 2) != 0 )
          {
            if ( v9 )
              guard_dispatch_icall_no_overrides(a1);
          }
          else
          {
            v19 = (KSPIN_LOCK *)a1[90].Count;
            if ( (void (__stdcall *)(PKSPIN_LOCK, KIRQL))v16[1].Count == KeReleaseSpinLock )
              KeReleaseSpinLock(v19, a1[58].Count);
            else
              guard_dispatch_icall_no_overrides(v19);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v16);
        if ( v12 )
        {
          v18 = *((_DWORD *)v12 + 16);
          if ( v18 < 0 )
          {
            v8 = *((_DWORD *)v12 + 16);
            PsTerminateProcess(a1, (unsigned int)v18);
            break;
          }
        }
      }
    }
    ExtensionTable = v26;
    v11 = v25;
  }
  if ( v11 && (!v12 || *((int *)v12 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v12 || *((int *)v12 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v35 )
    ObfDereferenceObject(Object);
  return v8;
}
