/*
 * XREFs of HalpIommuConfigureInterrupt @ 0x14054F964
 * Callers:
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptIsMsiSupported @ 0x1404B1F6C (HalpInterruptIsMsiSupported.c)
 *     HalpInterruptGenerateMessage @ 0x14053E5D0 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x140B4FAB0 (HalpIommuSetupMessageInterruptRouting.c)
 */

__int64 __fastcall HalpIommuConfigureInterrupt(__int64 a1, int a2, __int128 *a3)
{
  __int128 v6; // xmm0
  unsigned int Message; // ebx
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+38h] [rbp-61h]
  int v14; // [rsp+3Ch] [rbp-5Dh]
  __int128 *v15; // [rsp+40h] [rbp-59h]
  __int128 v16; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v17[2]; // [rsp+60h] [rbp-39h] BYREF
  char v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  int v20; // [rsp+70h] [rbp-29h]
  __int128 v21; // [rsp+78h] [rbp-21h]
  unsigned int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  int v24; // [rsp+90h] [rbp-9h]
  unsigned int v25; // [rsp+94h] [rbp-5h]

  v14 = 0;
  v12 = 6LL;
  v16 = 0LL;
  memset_0(v17, 0, 0x58uLL);
  v6 = *a3;
  v17[1] = 206;
  v18 = 12;
  v22 = a2 & 0x3FFFFFFF | v22 & 0xC0000000 | 0x40000000;
  v21 = v6;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a3);
  v15 = &v16;
  Message = -1073741637;
  LODWORD(v16) = a2 & 0x3FFFFFFF;
  if ( (*(_DWORD *)(a1 + 472) & 2) == 0 )
    return Message;
  if ( !HalpInterruptIsMsiSupported(1) )
    return Message;
  v8 = *(_DWORD *)(a1 + 392);
  if ( (v8 & 3) == 1 )
    return Message;
  if ( (v8 & 1) != 0 )
    goto LABEL_10;
  if ( a2 == 1073741822 )
  {
    Message = HalpInterruptGenerateMessage((__int64)&v12, (__int64)v17, (_QWORD *)(a1 + 496), (_QWORD *)(a1 + 504));
    if ( (Message & 0x80000000) == 0 )
      goto LABEL_9;
    return Message;
  }
  v9 = *(_DWORD *)(a1 + 488);
  v10 = *(_DWORD *)(a1 + 484);
  v19 = 0;
  v17[0] = 3;
  v20 = 1;
  Message = HalpInterruptRemap(v10, v9, 0LL, 0, v17, 1u);
  if ( (Message & 0x80000000) != 0 )
    return Message;
  *(_DWORD *)(a1 + 500) = v23;
  *(_DWORD *)(a1 + 496) = v24;
  *(_QWORD *)(a1 + 504) = v25;
LABEL_9:
  *(_DWORD *)(a1 + 392) |= 1u;
LABEL_10:
  result = HalpIommuSetupMessageInterruptRouting(a1);
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 392) |= 2u;
  return result;
}
