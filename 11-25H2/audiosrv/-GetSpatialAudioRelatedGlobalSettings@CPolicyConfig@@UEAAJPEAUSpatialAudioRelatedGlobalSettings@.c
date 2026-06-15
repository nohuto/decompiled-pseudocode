/*
 * XREFs of ?GetSpatialAudioRelatedGlobalSettings@CPolicyConfig@@UEAAJPEAUSpatialAudioRelatedGlobalSettings@@@Z @ 0x180100E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolicyConfig::GetSpatialAudioRelatedGlobalSettings(
        CPolicyConfig *this,
        struct SpatialAudioRelatedGlobalSettings *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 1) + 176LL))((char *)this - 8, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_BYTE *)a2 = v7 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
