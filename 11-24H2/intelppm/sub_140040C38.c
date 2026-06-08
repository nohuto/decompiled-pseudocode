/*
 * XREFs of sub_140040C38 @ 0x140040C38
 * Callers:
 *     sub_140004DF0 @ 0x140004DF0 (sub_140004DF0.c)
 *     WorkerRoutine @ 0x140040AD0 (WorkerRoutine.c)
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_140040C38(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  int v5; // edx
  PVOID v6; // rsi
  int v7; // ebx
  unsigned int *v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v12; // r9d
  int v13; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x100u);
  v4 = sub_140040DB8(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v13);
  v6 = P;
  v7 = v4;
  if ( v4 < 0 )
    goto LABEL_10;
  if ( !v13 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_18;
    v12 = 33;
    goto LABEL_21;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x22u, (__int64)&unk_140012FE8, *((_DWORD *)P + 2));
    goto LABEL_18;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    {
LABEL_18:
      v7 = -1073741275;
      goto LABEL_10;
    }
    v12 = 35;
LABEL_21:
    LOBYTE(v5) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v5, 1, v12, (__int64)&unk_140012FE8);
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
    v8 = *(unsigned int **)(a1 + 456);
  else
    v8 = *(unsigned int **)(a1 + 448);
  v9 = *v8;
  v7 = 0;
  v10 = v9 - 1;
  if ( *((_DWORD *)P + 4) < v9 )
    v10 = *((_DWORD *)P + 4);
  *a2 = v10;
LABEL_10:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x100u);
  return (unsigned int)v7;
}
