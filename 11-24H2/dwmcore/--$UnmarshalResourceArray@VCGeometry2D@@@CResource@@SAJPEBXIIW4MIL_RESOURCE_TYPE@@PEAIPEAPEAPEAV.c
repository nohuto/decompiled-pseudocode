/*
 * XREFs of ??$UnmarshalResourceArray@VCGeometry2D@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCGeometry2D@@PEAVCResourceTable@@_N@Z @ 0x180215730
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x180036228 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray<CGeometry2D>(
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
  result = CResource::UnmarshalResourceArray(a1, a2, a3, 0x44u, a5, &v8, a7, 1);
  *a6 = v8;
  return result;
}
