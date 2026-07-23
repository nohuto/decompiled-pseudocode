/*
 * XREFs of KdpSearchMemory @ 0x140B79EF4
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140680E78 (MmDbgCopyMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KdpQuickMoveMemory @ 0x140B77490 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpSearchMemory(__int64 a1, __int64 a2)
{
  char *v2; // r14
  __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 v5; // r10
  unsigned int v7; // r13d
  int v8; // r8d
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  char *v11; // rbx
  unsigned int v12; // edx
  int v13; // r12d
  char *v14; // r14
  signed __int64 v15; // r15
  char *v16; // rax
  char v18[4]; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+34h] [rbp-4Ch] BYREF
  char *v20; // [rsp+38h] [rbp-48h]
  unsigned __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v23[4]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v24[4]; // [rsp+68h] [rbp-18h]

  v2 = *(char **)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = -1;
  v5 = *(_QWORD *)(a1 + 24);
  v19 = 0;
  v7 = *(_DWORD *)(a1 + 32);
  v20 = v2;
  v21 = v3 + v5;
  v18[0] = 0;
  *(_DWORD *)(a1 + 8) = -2147483622;
  v22 = 0LL;
  if ( v7 <= 3 )
    v4 = 0xFFFFFFFF >> (8 * (4 - v7));
  v23[0] = 0;
  v24[0] = v4;
  v8 = 4;
  v24[1] = v4 << 8;
  v24[3] = v4 << 24;
  v24[2] = v4 << 16;
  if ( v7 < 5 )
    v8 = v7;
  KdpQuickMoveMemory((__int64)v23, v2, v8);
  v10 = v3 & 3;
  v23[1] = v23[0] << 8;
  v23[2] = v23[0] << 16;
  v11 = (char *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  v23[3] = v23[0] << 24;
  while ( (unsigned __int64)v11 < v9 )
  {
    if ( (int)MmDbgCopyMemory(v11, &v19, 4u, 4u, 4) >= 0 )
    {
      v12 = v7 - 4;
      while ( (unsigned int)v10 < 4 )
      {
        if ( (v19 & v24[v10]) == v23[v10] )
        {
          if ( 4 - (int)v10 >= v7 )
          {
            v16 = &v11[v10];
            goto LABEL_23;
          }
          v13 = v12 + v10;
          v14 = &v2[-(unsigned int)v10 + 4];
          if ( !(v12 + (_DWORD)v10) )
          {
LABEL_21:
            v16 = &v11[(unsigned int)v10];
LABEL_23:
            *(_DWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = v16;
            goto LABEL_24;
          }
          v15 = (unsigned int)v10 + v11 - v20;
          while ( (int)MmDbgCopyMemory(&v14[v15], v18, 1u, 1u, 4) >= 0 )
          {
            if ( v18[0] == *v14 )
            {
              ++v14;
              if ( --v13 )
                continue;
            }
            if ( !v13 )
              goto LABEL_21;
            break;
          }
          v2 = v20;
          v12 = v7 - 4;
        }
        v10 = (unsigned int)(v10 + 1);
      }
    }
    v9 = v21;
    v11 += 4;
    v10 = 0LL;
  }
LABEL_24:
  LODWORD(v22) = 3670072;
  *((_QWORD *)&v22 + 1) = a1;
  return KdSendPacket(2LL, &v22, 0LL, &KdpContext);
}
