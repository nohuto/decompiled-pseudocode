/*
 * XREFs of ExtEnvSetVpptTarget @ 0x140374B64
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x1403729E8 (HalpVpptUpdatePhysicalTimer.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExtEnvSetVpptTarget(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // rdi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  signed int v7; // ebx
  int v8; // esi
  _DWORD *LinesForGsiRange; // rax
  int v10; // ecx
  char v11; // r14
  unsigned __int8 v12; // al
  __int64 *v13; // r8
  __int64 *v14; // rdx
  unsigned int v15; // r14d
  _DWORD *v16; // rax
  ULONG_PTR *v17; // rax
  ULONG_PTR *v18; // rdx
  ULONG_PTR *v19; // rax
  ULONG_PTR *v20; // rcx
  signed int v21; // r8d
  int v22; // ebx
  int v23; // eax
  __int64 result; // rax
  __int64 v25; // [rsp+38h] [rbp-39h] BYREF
  __int128 v26; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-19h] BYREF
  int v28; // [rsp+5Ch] [rbp-15h]
  char v29; // [rsp+60h] [rbp-11h]
  int v30; // [rsp+64h] [rbp-Dh]
  int v31; // [rsp+68h] [rbp-9h]
  __int128 v32; // [rsp+70h] [rbp-1h]
  int v33; // [rsp+80h] [rbp+Fh]
  int v34; // [rsp+90h] [rbp+1Fh]

  v2 = a2;
  v26 = 0LL;
  memset_0(&v27, 0, 0x58uLL);
  v3 = (_DWORD *)HalpAlwaysOnTimer;
  v4 = *((_DWORD *)KiGlobalState + v2);
  *((_QWORD *)&v26 + 1) = (unsigned __int16)(v4 >> 6);
  *(_QWORD *)&v26 = 1LL << (v4 & 0x3F);
  if ( HalpAlwaysOnTimer && *(_DWORD *)(HalpAlwaysOnTimer + 228) == 12 )
  {
    v28 = 211;
    v5 = v33 & 0xC0000000 | 4;
  }
  else
  {
    v3 = (_DWORD *)HalpClockTimer;
    if ( *(_DWORD *)(HalpClockTimer + 228) != 12 )
      KeBugCheckEx(0x5Cu, 0x114uLL, 0LL, 0xFFFFFFFFC00000BBuLL, 0LL);
    v5 = v33 & 0xC0000000;
    v28 = 209;
  }
  v29 = 13;
  v33 = v5 | 0x40000000;
  v30 = v3[23];
  v31 = v3[24];
  v6 = v3[56];
  v32 = v26;
  if ( (v6 & 0x200) != 0 )
  {
    LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v3[22], v3[22] + 1);
    if ( !LinesForGsiRange )
      KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, 0xFFFFFFFFC0000225uLL, 1uLL);
    v8 = LinesForGsiRange[4];
    v7 = v10 + LinesForGsiRange[5] - LinesForGsiRange[7];
  }
  else
  {
    if ( (v6 & 0x100) == 0 )
      KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, 0xFFFFFFFFC00000BBuLL, 2uLL);
    v7 = v3[21];
    if ( (unsigned int)v7 >= 8 )
    {
      v8 = 45057;
      v7 -= 8;
    }
    else
    {
      v8 = 45056;
    }
  }
  v11 = 0;
  v12 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v13 = (__int64 *)HalpInterruptOverrides;
  while ( v13 != &HalpInterruptOverrides )
  {
    v14 = v13;
    v13 = (__int64 *)*v13;
    if ( *((_DWORD *)v14 + 4) == v8 && *((_DWORD *)v14 + 5) == v7 )
    {
      v11 = 1;
      v25 = v14[3];
      v7 = HIDWORD(v25);
      v8 = v25;
      v30 = *((_DWORD *)v14 + 9);
      v31 = *((_DWORD *)v14 + 8);
      break;
    }
  }
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptOverridesLock, v12);
  if ( !v11 && *(_DWORD *)(HalpInterruptController + 240) == 2 && (unsigned int)(v8 - 45056) <= 1 )
  {
    v15 = v7;
    if ( v8 == 45057 )
      v15 = v7 + 8;
    v16 = HalpInterruptFindLinesForGsiRange(v15, v15 + 1);
    if ( v16 )
    {
      v8 = v16[4];
      v7 = v15 + v16[5] - v16[7];
    }
  }
  v17 = HalpInterruptLookupController(v8);
  if ( !v17 )
    goto LABEL_28;
  v18 = v17 + 33;
  v19 = (ULONG_PTR *)v17[33];
  do
  {
    if ( v19 == v18 )
      goto LABEL_28;
    v20 = v19;
    v19 = (ULONG_PTR *)*v19;
    v21 = *((_DWORD *)v20 + 5);
  }
  while ( v21 > v7 || *((_DWORD *)v20 + 6) <= v7 );
  v22 = v7 - v21;
  if ( !v20 || (v23 = *((_DWORD *)v20 + 7), v23 == -1) )
LABEL_28:
    KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, 0xFFFFFFFFC000000DuLL, 3uLL);
  v27 = 0;
  LODWORD(v25) = v22 + v23;
  v34 = v22 + v23;
  result = HalpInterruptSetDestination(&v27, (__int64)&v26, (unsigned int *)&v25);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, (int)result, 4uLL);
  return result;
}
