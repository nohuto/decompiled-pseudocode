/*
 * XREFs of CmCheckRegistry @ 0x140AE33E0
 * Callers:
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140448960 (RtlClearAllBits.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCheckRegistry2 @ 0x140884BD0 (CmpCheckRegistry2.c)
 *     HvCheckHive @ 0x14098A9C0 (HvCheckHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int *v7; // r13
  RTL_BITMAP *p_BitMapHeader; // r12
  char v9; // si
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  unsigned int *v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // r9d
  int v19; // [rsp+20h] [rbp-49h]
  __int64 v20; // [rsp+40h] [rbp-29h] BYREF
  RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  __int128 v22; // [rsp+58h] [rbp-11h] BYREF
  __int128 v23; // [rsp+68h] [rbp-1h]
  __int128 v24; // [rsp+78h] [rbp+Fh]
  __int64 v25; // [rsp+88h] [rbp+1Fh]
  char v26; // [rsp+D0h] [rbp+67h] BYREF
  int v27; // [rsp+D8h] [rbp+6Fh]
  int v28; // [rsp+E8h] [rbp+7Fh]

  v27 = a2;
  v4 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  p_BitMapHeader = 0LL;
  LODWORD(v20) = 0;
  v22 = 0LL;
  v9 = 0;
  v26 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( BugCheckParameter3 == CmpMasterHive )
    return v4;
  v10 = *(_DWORD *)(BugCheckParameter3 + 280) >> 3;
  v11 = (((v10 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v12 = (unsigned int *)guard_dispatch_icall_no_overrides(v11, 0LL, 1649167683LL, a4);
    v7 = v12;
    if ( !v12 )
    {
      v4 = -1073741670;
      SetFailureLocation(a3, 0, 11, -1073741670, 0);
      return v4;
    }
    BitMapHeader.SizeOfBitMap = v10;
    BitMapHeader.Buffer = v12;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    a2 = v27;
  }
  v13 = a2 & 0x10000;
  v28 = a2 & 0x10000;
  while ( 1 )
  {
    if ( v13 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v14 = HvCheckHive(BugCheckParameter3, a2, a3, p_BitMapHeader, (__int64)&v22, a3);
      v4 = v14;
      if ( v14 < 0 )
      {
        v19 = 16;
        goto LABEL_25;
      }
      if ( (int)v22 + (int)v23 + (int)v24 > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(BugCheckParameter3 + 4112) |= 0x400u;
      a2 = v27;
      *(_QWORD *)(BugCheckParameter3 + 4752) = v25;
    }
    if ( *(int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) < 0 )
      break;
    v14 = CmpValidateHiveSecurityDescriptors(BugCheckParameter3, a2, &v26, (__int64)p_BitMapHeader, a3);
    v4 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -2147483606 )
      {
        if ( v14 != -1073741267 )
        {
          v19 = 48;
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      v9 = 1;
    }
    v14 = CmpCheckRegistry2(
            BugCheckParameter3,
            v27,
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
            v15,
            v26,
            (__int64)p_BitMapHeader,
            a3,
            (int *)&v20);
    v4 = v14;
    if ( v14 >= 0 )
      goto LABEL_28;
    if ( v14 == -2147483606 )
    {
      v9 = 1;
LABEL_28:
      *(_DWORD *)(BugCheckParameter3 + 4764) = v20;
      v4 = v9 != 0 ? 0x8000002A : 0;
      goto LABEL_31;
    }
    if ( v14 != -1073741267 )
    {
      v19 = 64;
LABEL_25:
      v17 = v14;
      goto LABEL_30;
    }
LABEL_23:
    v13 = v28;
    v9 = 1;
    a2 = v27;
  }
  v4 = -1073741492;
  v19 = 32;
  v17 = -1073741492;
LABEL_30:
  SetFailureLocation(a3, 0, 11, v17, v19);
LABEL_31:
  if ( v7 )
    guard_dispatch_icall_no_overrides(v7, v11, a3, v16);
  return v4;
}
