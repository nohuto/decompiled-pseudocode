/*
 * XREFs of sub_140040970 @ 0x140040970
 * Callers:
 *     sub_140004DF0 @ 0x140004DF0 (sub_140004DF0.c)
 *     sub_140033CF0 @ 0x140033CF0 (sub_140033CF0.c)
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_140040970(__int64 a1, unsigned int *a2)
{
  int v4; // edx
  int v5; // ebx
  PVOID v6; // rdi
  int v7; // r9d
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x1000u);
  v5 = sub_140040DB8(a1, 1129337951, 0, (unsigned int)&P, (__int64)&v11);
  if ( v5 < 0 )
  {
LABEL_19:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x1000u);
    return (unsigned int)v5;
  }
  v6 = P;
  if ( !v11 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    {
LABEL_6:
      v5 = -1073741275;
      goto LABEL_16;
    }
    v7 = 39;
LABEL_5:
    LOBYTE(v4) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v4, 1, v7, (__int64)&unk_140012FE8);
    goto LABEL_6;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x28u, (__int64)&unk_140012FE8, *((_DWORD *)P + 2));
    goto LABEL_6;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_6;
    v7 = 41;
    goto LABEL_5;
  }
  v5 = 0;
  v8 = **(_DWORD **)(a1 + 504);
  v9 = v8 - 1;
  if ( *((_DWORD *)P + 4) < v8 )
    v9 = *((_DWORD *)P + 4);
  *a2 = v9;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 < 0 )
    goto LABEL_19;
  return (unsigned int)v5;
}
