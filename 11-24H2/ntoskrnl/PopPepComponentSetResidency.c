/*
 * XREFs of PopPepComponentSetResidency @ 0x1405D87D4
 * Callers:
 *     PoFxSetComponentResidency @ 0x1405CE020 (PoFxSetComponentResidency.c)
 * Callees:
 *     PopPepUpdateIdleState @ 0x1402BF8D0 (PopPepUpdateIdleState.c)
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x1402C1CE0 (PopPepReleaseActivityLink.c)
 *     PopPepPromoteActivities @ 0x1402C2120 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1403A76F0 (PopPepLockActivityLink.c)
 *     PopPepCountReadyActivities @ 0x1404283A0 (PopPepCountReadyActivities.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140447D50 (PopPepComponentGetResidencyIdleState.c)
 */

void __fastcall PopPepComponentSetResidency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdi
  int ResidencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v5 = (__int64)&a1[52 * a2 + 48];
  v11 = 0;
  if ( a3 != -1LL )
    v3 = a3;
  ResidencyIdleState = PopPepComponentGetResidencyIdleState(v5, v3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v5, 6u, 1u, &v11);
  *(_QWORD *)(v5 + 128) = v3;
  v8 = v7;
  *(_QWORD *)(v5 + 120) = v3;
  if ( *(_DWORD *)(v5 + 160) != ResidencyIdleState )
  {
    *(_DWORD *)(v5 + 160) = ResidencyIdleState;
    ready = PopPepCountReadyActivities(a1, v5, 2);
    PopPepUpdateIdleState((__int64)a1, v5, 1);
    PopPepPromoteActivities((__int64)a1, v5, 2);
    v10 = PopPepCountReadyActivities(a1, v5, 2);
    PopPepRequestWork((__int64)a1, ready, v10);
  }
  PopPepReleaseActivityLink((__int64)a1, (_DWORD *)v5, v8, v11);
}
