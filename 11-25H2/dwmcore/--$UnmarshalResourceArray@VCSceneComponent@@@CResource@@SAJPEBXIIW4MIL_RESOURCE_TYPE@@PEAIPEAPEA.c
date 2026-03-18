/*
 * XREFs of ??$UnmarshalResourceArray@VCSceneComponent@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCSceneComponent@@PEAVCResourceTable@@_N@Z @ 0x18027E660
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18012E320 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray<CSceneComponent>(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 result; // rax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0LL;
  result = CResource::UnmarshalResourceArray(a1, a2, a3, 0x8Du, a5, &v8, a7, 0);
  *a6 = v8;
  return result;
}
