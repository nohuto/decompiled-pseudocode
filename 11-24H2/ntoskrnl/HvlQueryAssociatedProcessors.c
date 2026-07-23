/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x140585030
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, __int64 a3)
{
  unsigned int v7; // esi
  unsigned int v8; // r14d
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned int i; // r9d
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r11
  __int64 v18; // r10
  unsigned int v19; // eax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int64 v22; // [rsp+38h] [rbp-28h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+58h] [rbp-8h]

  v24 = 0LL;
  LODWORD(v25) = 0;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v23 = 0LL;
  v20 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( !a2 )
    return 3221225485LL;
  v7 = 0;
  v8 = 0;
  v9 = HvlpAcquireHypercallPage((__int64)&v23, 1, 0LL, 8LL);
  v10 = HvlpAcquireHypercallPage((__int64)&v20, 2, 0LL, 272LL);
  *(_DWORD *)v9 = a1;
  if ( (unsigned __int16)HvcallInitiateHypercall(260) )
  {
    v11 = -1073741823;
  }
  else
  {
    v12 = v10[1];
    for ( i = 0; ; ++i )
    {
      v16 = !_BitScanForward64((unsigned __int64 *)&v18, v12);
      if ( v16 )
        break;
      _bittestandcomplement64((__int64 *)&v12, (unsigned int)v18);
      v14 = v10[i + 2];
      while ( 1 )
      {
        v16 = !_BitScanForward64((unsigned __int64 *)&v17, v14);
        if ( v16 )
          break;
        ++v7;
        v14 ^= 1LL << v17;
        if ( *a2 >= v7 )
        {
          v15 = v8++;
          *(_DWORD *)(a3 + 4 * v15) = v17 + ((_DWORD)v18 << 6);
        }
      }
    }
    v19 = *a2;
    *a2 = v7;
    v11 = v19 < v7 ? 0xC0000023 : 0;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v20);
  HvlpReleaseHypercallPage((unsigned int *)&v23);
  return v11;
}
