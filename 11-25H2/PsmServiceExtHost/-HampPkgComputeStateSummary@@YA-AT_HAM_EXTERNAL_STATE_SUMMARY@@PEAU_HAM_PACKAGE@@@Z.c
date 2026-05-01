/*
 * XREFs of ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x180016464
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015E20 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800169D0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampAppComputeProcessPresence@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x18001727C (-HampAppComputeProcessPresence@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800175A0 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x1800431E0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 */

__int64 __fastcall HampPkgComputeStateSummary(struct _HAM_RC_TREE_NODE *a1)
{
  unsigned int v1; // ebx
  struct _HAM_APPLICATION *i; // rax
  struct _HAM_APPLICATION *v4; // rsi
  int v5; // edi
  __int64 *Value; // rax
  __int64 v7; // rcx
  __int16 v9; // ax
  unsigned int v10; // r11d
  unsigned int v11; // eax
  unsigned int v12; // r10d
  __int16 v13; // di
  int v14; // r11d
  int v15; // r11d

  v1 = 128;
  for ( i = HamRcNodeGetFirst(a1, 1u); ; i = HamRcNodeGetSuccessor(a1, v4) )
  {
    v4 = i;
    if ( !i )
      break;
    HampAppAcquireLockShared(i);
    v5 = *((_DWORD *)v4 + 155);
    if ( HampLockTrackerId != -1 )
    {
      Value = (__int64 *)TlsGetValue(HampLockTrackerId);
      v7 = *Value;
      if ( (*Value & 0x20) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( Value[6]-- == 1 )
        *Value = v7 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared((char *)v4 + 584);
    v9 = HampAppComputeProcessPresence(v4);
    v10 = v1 >> 5;
    v11 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v9 << 10)) & 0x400;
    v12 = v1 >> 3;
    v13 = v11 | v1;
    if ( (unsigned __int8)((v1 >> 5) & 7) >= (unsigned __int8)((v11 >> 5) & 7) )
      LOBYTE(v10) = v11 >> 5;
    v14 = 4 * (v10 & 7);
    if ( (unsigned __int8)((v1 >> 3) & 3) <= (unsigned __int8)((v11 >> 3) & 3) )
      LOBYTE(v12) = v11 >> 3;
    v15 = 8 * (v12 & 3 | v14);
    if ( (unsigned __int8)(v1 & 7) <= (unsigned __int8)(v11 & 7) )
      LOBYTE(v1) = v11;
    v1 = ((v13 & 0x100) != 0 ? 0x100 : 0) | ((v13 & 0x200) != 0 ? 0x200 : 0) | ((v13 & 0x400) != 0 ? 0x400 : 0) | v1 & 7 | v15;
  }
  return v1;
}
