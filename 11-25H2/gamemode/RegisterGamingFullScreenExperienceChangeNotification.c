/*
 * XREFs of RegisterGamingFullScreenExperienceChangeNotification @ 0x18000DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18000C8A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     IsGamingFullScreenExperienceSupported @ 0x18000DC10 (IsGamingFullScreenExperienceSupported.c)
 */

__int64 __fastcall RegisterGamingFullScreenExperienceChangeNotification(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID Heap; // rax
  void *v7; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  int v13[10]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( IsGamingFullScreenExperienceSupported() )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x18uLL);
    v7 = Heap;
    if ( !Heap )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    *((_QWORD *)Heap + 1) = a1;
    *((_QWORD *)Heap + 2) = a2;
    v15 = 0;
    v13[0] = 0;
    v16 = 4;
    v9 = NtQueryWnfStateData(&WNF_GAME_IS_GAMING_POSTURE_ACTIVE, 0LL, 0LL, &v15, v13, &v16);
    if ( v9 < 0 )
    {
      v10 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x135,
              (int)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
              (const char *)(unsigned int)v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      return v10;
    }
    v11 = RtlSubscribeWnfStateChangeNotification(
            v7,
            WNF_GAME_IS_GAMING_POSTURE_ACTIVE,
            v15,
            GamingPostureWnfCallback,
            v7,
            0LL,
            0,
            0);
    if ( v11 < 0 )
    {
      v12 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x13D,
              (int)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
              (const char *)(unsigned int)v11);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      return v12;
    }
    *a3 = v7;
  }
  return 0LL;
}
