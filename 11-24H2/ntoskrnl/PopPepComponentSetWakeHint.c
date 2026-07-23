/*
 * XREFs of PopPepComponentSetWakeHint @ 0x1405D88D0
 * Callers:
 *     PoFxSetComponentWake @ 0x1405CE070 (PoFxSetComponentWake.c)
 * Callees:
 *     PopPepUpdateIdleState @ 0x1402BF8D0 (PopPepUpdateIdleState.c)
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x1402C1CE0 (PopPepReleaseActivityLink.c)
 *     PopPepPromoteActivities @ 0x1402C2120 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1403A76F0 (PopPepLockActivityLink.c)
 *     PopPepCountReadyActivities @ 0x1404283A0 (PopPepCountReadyActivities.c)
 */

void __fastcall PopPepComponentSetWakeHint(unsigned int *a1, int a2, char a3)
{
  __int64 v4; // rdi
  int v6; // ebx
  char v7; // al
  char v8; // r14
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v4 = (__int64)&a1[52 * a2 + 48];
  if ( a3 )
    v6 = *(_DWORD *)(v4 + 148);
  else
    v6 = *(_DWORD *)(v4 + 188) - 1;
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v11);
  *(_BYTE *)(v4 + 144) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v4 + 164) != v6 )
  {
    *(_DWORD *)(v4 + 164) = v6;
    ready = PopPepCountReadyActivities(a1, v4, 2);
    PopPepUpdateIdleState((__int64)a1, v4, 1);
    PopPepPromoteActivities((__int64)a1, v4, 2);
    v10 = PopPepCountReadyActivities(a1, v4, 2);
    PopPepRequestWork((__int64)a1, ready, v10);
  }
  PopPepReleaseActivityLink((__int64)a1, (_DWORD *)v4, v8, v11);
}
