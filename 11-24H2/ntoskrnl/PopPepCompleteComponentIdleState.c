/*
 * XREFs of PopPepCompleteComponentIdleState @ 0x1403110AC
 * Callers:
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 * Callees:
 *     PopPepLockActivityLink @ 0x140312A80 (PopPepLockActivityLink.c)
 *     PopPlNotifyDeviceFState @ 0x140315BD0 (PopPlNotifyDeviceFState.c)
 *     PopPepRequestWork @ 0x1403170D0 (PopPepRequestWork.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopPepReleaseActivityLink @ 0x140319150 (PopPepReleaseActivityLink.c)
 */

__int64 __fastcall PopPepCompleteComponentIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8

  v3 = 208LL * a2 + a1 + 192;
  v5 = PopPepLockActivityLink(a1, v3, 6LL);
  v8 = *(_QWORD *)(v3 + 64);
  v9 = v5;
  if ( *(_DWORD *)(v8 + 12) == 1 )
  {
    *(_DWORD *)(v8 + 12) = 2;
    v10 = (unsigned int)(*(_DWORD *)(v3 + 104) + *(_DWORD *)(a1 + 120));
    **(_DWORD **)(v3 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 104));
    PopPepRequestWork(a1, v10, (unsigned int)(*(_DWORD *)(v3 + 104) + *(_DWORD *)(a1 + 120)));
    LOBYTE(v11) = 0;
    LOBYTE(v12) = v9;
    return PopPepReleaseActivityLink(a1, v3, v12, v11);
  }
  else
  {
    LOBYTE(v7) = 0;
    LOBYTE(v6) = v5;
    PopPepReleaseActivityLink(a1, v3, v6, v7);
    PopPepProcessEvent(a1, v3, 1LL);
    return PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v3 + 180), *(_DWORD *)(v3 + 176), 1);
  }
}
