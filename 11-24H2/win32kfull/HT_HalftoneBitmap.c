/*
 * XREFs of HT_HalftoneBitmap @ 0x14013C6B8
 * Callers:
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 * Callees:
 *     AAHalftoneBitmap @ 0x14013A0D8 (AAHalftoneBitmap.c)
 *     pDCIAdjClr @ 0x14013CA6C (pDCIAdjClr.c)
 *     SanityCheckDimension @ 0x1401ADFB8 (SanityCheckDimension.c)
 *     CheckABInfo @ 0x14026C14C (CheckABInfo.c)
 */

__int64 __fastcall HT_HalftoneBitmap(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int16 *a6)
{
  __int64 v7; // r14
  __int16 v8; // si
  unsigned __int16 v9; // r15
  __int16 v10; // r12
  unsigned __int16 v11; // r13
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  char *v15; // rbx
  char *v16; // r15
  __int64 result; // rax
  __int64 v18; // rax
  PVOID v19; // rax
  char v20; // [rsp+40h] [rbp-28h]
  unsigned __int16 v21; // [rsp+44h] [rbp-24h] BYREF
  int v22; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-1Ch] BYREF
  int v24; // [rsp+50h] [rbp-18h]
  PVOID pv; // [rsp+58h] [rbp-10h] BYREF
  char v30; // [rsp+D8h] [rbp+70h]

  v7 = *(unsigned __int8 *)(a3 + 10);
  v8 = 0;
  pv = 0LL;
  v9 = 0;
  v10 = *a6;
  v23 = 0;
  v11 = 0;
  v12 = *(unsigned __int8 *)(a5 + 10);
  v30 = v7;
  v20 = *(_BYTE *)(a5 + 10);
  LOWORD(v22) = 0;
  v21 = 0;
  v24 = 0;
  if ( (_DWORD)v7 == 1 || (unsigned int)(v7 - 2) < 2 )
  {
    v18 = *(_QWORD *)(a3 + 32);
    v11 = 1 << byte_140352D5C[v7];
    if ( !v18 )
      return 4294967278LL;
    v24 = *(_DWORD *)(v18 + 8);
    if ( !v24 )
      return 4294967278LL;
  }
  if ( !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 4), *((unsigned int *)a6 + 6))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 5), *((unsigned int *)a6 + 7))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 8), *((unsigned int *)a6 + 10))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 9), *((unsigned int *)a6 + 11))
    || (*(_BYTE *)a6 & 1) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 12), *((unsigned int *)a6 + 14))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 13), *((unsigned int *)a6 + 15)))
    || (*(_BYTE *)a6 & 0x10) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 16), *((unsigned int *)a6 + 18))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 17), *((unsigned int *)a6 + 19))) )
  {
    return 4294967294LL;
  }
  if ( (v10 & 0x200) != 0 )
  {
    result = CheckABInfo((_DWORD)a6, v7, v12, (unsigned int)&v22, (__int64)&v21);
    v23 = result;
    if ( (int)result <= 0 )
      return result;
    v8 = v22;
    v9 = v21;
  }
  BYTE2(v22) = *((_BYTE *)a6 + 3);
  LOWORD(v22) = 1024;
  HIBYTE(v22) = v12;
  if ( (v10 & 2) != 0 )
    v8 |= 4u;
  if ( (v10 & 4) != 0 )
    v8 |= 2u;
  if ( (v10 & 0x20) != 0 || (_BYTE)v12 == 1 )
    v8 |= 1u;
  if ( (v10 & 0x80u) != 0 )
    v8 |= 8u;
  if ( (v10 & 0x100) != 0 )
    v8 |= 0x20u;
  v13 = pDCIAdjClr(a1, a2, (unsigned int)&pv, 4 * (v11 + (unsigned int)v9) + 688, v8, v22, (__int64)&v23);
  v14 = v13;
  if ( v13 )
  {
    v15 = (char *)pv + 312;
    *((_QWORD *)pv + 39) = v13;
    v16 = v15 + 688;
    *((_QWORD *)v15 + 1) = pv;
    *((_QWORD *)v15 + 3) = a3;
    *((_QWORD *)v15 + 4) = a4;
    *((_QWORD *)v15 + 5) = a5;
    *((_QWORD *)v15 + 6) = v15 + 88;
    *((_QWORD *)v15 + 2) = a6;
    if ( v11 )
    {
      *((_WORD *)v15 + 49) = v24;
      *((_QWORD *)v15 + 22) = v16;
      v16 += 4 * v11;
    }
    if ( (v8 & 0x80u) != 0 )
    {
      if ( !*(_QWORD *)(v13 + 7064) )
      {
        v19 = EngAllocMem(1u, 0xB00u, 0x35345448u);
        *(_QWORD *)(v14 + 7064) = v19;
        if ( !v19 )
        {
          EngReleaseSemaphore(*(HSEMAPHORE *)(v14 + 8));
          return 4294967294LL;
        }
      }
      if ( (v8 & 0x100) != 0 )
      {
        *(_WORD *)(v14 + 7056) = *(_WORD *)(v14 + 7058);
        *(_WORD *)(v14 + 7058) = *(unsigned __int8 *)(*((_QWORD *)a6 + 1) + 1LL);
      }
      if ( v21 )
      {
        *((_QWORD *)v15 + 33) = v16;
        *((_WORD *)v15 + 93) = *(_WORD *)(*((_QWORD *)a6 + 1) + 2LL);
      }
    }
    v15[161] = v30;
    v15[249] = v20;
    if ( (v10 & 0x40) != 0 )
      *((_QWORD *)v15 + 4) = 0LL;
    v23 = AAHalftoneBitmap((__int64 *)v15);
    EngFreeMem(pv);
  }
  return v23;
}
