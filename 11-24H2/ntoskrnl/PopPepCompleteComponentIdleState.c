/*
 * XREFs of PopPepCompleteComponentIdleState @ 0x1404C8510
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 * Callees:
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepReleaseActivityLink @ 0x1402C1CE0 (PopPepReleaseActivityLink.c)
 *     PopPlNotifyDeviceFState @ 0x1403A734C (PopPlNotifyDeviceFState.c)
 *     PopPepLockActivityLink @ 0x1403A76F0 (PopPepLockActivityLink.c)
 */

void __fastcall PopPepCompleteComponentIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v5; // al
  __int64 v6; // rcx
  char v7; // bp
  unsigned int v8; // edx
  __int64 v9; // [rsp+20h] [rbp-18h]
  KIRQL v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v3 = 208LL * a2 + a1 + 192;
  v5 = PopPepLockActivityLink(a1, (volatile LONG *)v3, 6u, 1u, &v10);
  v6 = *(_QWORD *)(v3 + 64);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 12) == 1 )
  {
    *(_DWORD *)(v6 + 12) = 2;
    v8 = *(_DWORD *)(v3 + 104) + *(_DWORD *)(a1 + 120);
    **(_DWORD **)(v3 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 104));
    PopPepRequestWork(a1, v8, *(_DWORD *)(v3 + 104) + *(_DWORD *)(a1 + 120));
    PopPepReleaseActivityLink(a1, (_DWORD *)v3, v7, v10);
  }
  else
  {
    PopPepReleaseActivityLink(a1, (_DWORD *)v3, v5, v10);
    PopPepProcessEvent(a1, v3, 1u, 6u, v9, 0LL);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v3 + 180), *(_DWORD *)(v3 + 176), 1);
  }
}
