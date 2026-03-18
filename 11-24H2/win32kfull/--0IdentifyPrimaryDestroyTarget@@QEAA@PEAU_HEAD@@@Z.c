/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x140082ADC
 * Callers:
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     FreeHook @ 0x1400837F0 (FreeHook.c)
 *     DestroyEventHook @ 0x1400849F0 (DestroyEventHook.c)
 *     FreeTimer @ 0x14023EC30 (FreeTimer.c)
 *     FreeDdeXact @ 0x140269EC0 (FreeDdeXact.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        struct _HEAD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax

  *(_BYTE *)this = 0;
  v3 = _HMPheFromObjectWorker(a2);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19816) && IS_USERCRIT_OWNED_EXCLUSIVE(v7, v6, v8) )
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19824);
    *(_BYTE *)this = v12 == 0;
    if ( v12 )
    {
      if ( v3 != *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19824) )
      {
        UserSessionState = W32GetUserSessionState(v15, v14);
        ++*(_DWORD *)(UserSessionState + 19832);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0LL, v11) + 19824) = v3;
    }
  }
  return this;
}
