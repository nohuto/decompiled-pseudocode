/*
 * XREFs of NtInputSpaceRegionFromPoint @ 0x1401B7A50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@1@@Z @ 0x1400D1238 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E71A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CLockedInputSpace@@QEAA@XZ @ 0x1400F3984 (--1CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1401F3D58 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtInputSpaceRegionFromPoint(struct _LUID a1, __int64 a2, void *a3)
{
  bool InputSpace; // al
  int v7; // ebx
  PERESOURCE *v9[2]; // [rsp+30h] [rbp-128h] BYREF
  PERESOURCE *v10[4]; // [rsp+40h] [rbp-118h] BYREF
  _OWORD Src[12]; // [rsp+60h] [rbp-F8h] BYREF
  PERESOURCE v12; // [rsp+120h] [rbp-38h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v10);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v9);
  InputSpace = InputConfig::GetInputSpace(a1, (struct CLockedInputSpace *)v10);
  v7 = 0;
  if ( InputSpace && InputConfig::RegionFromPoint(v10, a2, v9, 0) )
  {
    Src[0] = *(_OWORD *)v9[0];
    Src[1] = *((_OWORD *)v9[0] + 1);
    Src[2] = *((_OWORD *)v9[0] + 2);
    Src[3] = *((_OWORD *)v9[0] + 3);
    Src[4] = *((_OWORD *)v9[0] + 4);
    Src[5] = *((_OWORD *)v9[0] + 5);
    Src[6] = *((_OWORD *)v9[0] + 6);
    Src[7] = *((_OWORD *)v9[0] + 7);
    Src[8] = *((_OWORD *)v9[0] + 8);
    Src[9] = *((_OWORD *)v9[0] + 9);
    Src[10] = *((_OWORD *)v9[0] + 10);
    Src[11] = *((_OWORD *)v9[0] + 11);
    v12 = v9[0][24];
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a3, Src, 0xC8uLL);
    v7 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  CLockedInputSpace::~CLockedInputSpace(v9);
  CLockedInputSpace::~CLockedInputSpace(v10);
  return v7;
}
