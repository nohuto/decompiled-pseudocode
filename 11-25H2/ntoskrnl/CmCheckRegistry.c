/*
 * XREFs of CmCheckRegistry @ 0x140995590
 * Callers:
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCheckRegistry2 @ 0x14088B690 (CmpCheckRegistry2.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     HvCheckHive @ 0x140995810 (HvCheckHive.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  char v8; // si
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9
  unsigned int *v14; // rax
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-49h]
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  __int128 v19; // [rsp+58h] [rbp-11h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1h]
  __int128 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  char v23; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+D8h] [rbp+6Fh]
  int v25; // [rsp+E8h] [rbp+7Fh]

  v24 = a2;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  p_BitMapHeader = 0LL;
  LODWORD(v17) = 0;
  v19 = 0LL;
  v8 = 0;
  v23 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( BugCheckParameter3 == CmpMasterHive )
    return v3;
  v9 = *(_DWORD *)(BugCheckParameter3 + 280) >> 3;
  if ( (a2 & 0x80000) != 0 )
  {
    v14 = (unsigned int *)guard_dispatch_icall_no_overrides((((v9 + 7) >> 3) + 7) & 0xFFFFFFF8);
    v6 = v14;
    if ( !v14 )
    {
      v3 = -1073741670;
      SetFailureLocation(a3, 0, 11, -1073741670, 0);
      return v3;
    }
    BitMapHeader.SizeOfBitMap = v9;
    BitMapHeader.Buffer = v14;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    a2 = v24;
  }
  v10 = a2 & 0x10000;
  v25 = a2 & 0x10000;
  while ( 1 )
  {
    if ( v10 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v11 = HvCheckHive(BugCheckParameter3, a2, a3, p_BitMapHeader, &v19, a3);
      v3 = v11;
      if ( v11 < 0 )
      {
        v16 = 16;
        goto LABEL_26;
      }
      if ( (int)v19 + (int)v20 + (int)v21 > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(BugCheckParameter3 + 4112) |= 0x400u;
      LODWORD(a2) = v24;
      *(_QWORD *)(BugCheckParameter3 + 4752) = v22;
    }
    if ( *(int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) < 0 )
      break;
    v11 = CmpValidateHiveSecurityDescriptors(BugCheckParameter3, a2, &v23, (__int64)p_BitMapHeader, a3);
    v3 = v11;
    if ( v11 < 0 )
    {
      if ( v11 != -2147483606 )
      {
        if ( v11 != -1073741267 )
        {
          v16 = 48;
          goto LABEL_26;
        }
        goto LABEL_20;
      }
      v8 = 1;
    }
    v11 = CmpCheckRegistry2(
            BugCheckParameter3,
            v24,
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
            v12,
            v23,
            (__int64)p_BitMapHeader,
            a3,
            (int *)&v17);
    v3 = v11;
    if ( v11 >= 0 )
      goto LABEL_14;
    if ( v11 == -2147483606 )
    {
      v8 = 1;
LABEL_14:
      *(_DWORD *)(BugCheckParameter3 + 4764) = v17;
      v3 = v8 != 0 ? 0x8000002A : 0;
      goto LABEL_15;
    }
    if ( v11 != -1073741267 )
    {
      v16 = 64;
LABEL_26:
      v15 = v11;
      goto LABEL_33;
    }
LABEL_20:
    v10 = v25;
    v8 = 1;
    a2 = v24;
  }
  v3 = -1073741492;
  v16 = 32;
  v15 = -1073741492;
LABEL_33:
  SetFailureLocation(a3, 0, 11, v15, v16);
LABEL_15:
  if ( v6 )
    guard_dispatch_icall_no_overrides(v6);
  return v3;
}
