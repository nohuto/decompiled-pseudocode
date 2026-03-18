/*
 * XREFs of VidSchQueryProcessAdapterStatistics @ 0x1400F8E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x14002D9CC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidSchQueryProcessAdapterStatistics(unsigned int *a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v12; // r9
  _QWORD **v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v3 = a3 + 48;
  a3[1] = a1[20];
  a3[2] = a1[10];
  v5 = a2 - (_QWORD)a3;
  v6 = 9LL;
  do
  {
    *v3 = *(_QWORD *)((char *)v3 + v5 + 2488);
    ++v3;
    --v6;
  }
  while ( v6 );
  v7 = *(_QWORD *)(a2 + 8);
  v8 = a1[1];
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v8 >= (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    return 3221225485LL;
  _mm_lfence();
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8 * v8);
  if ( !v10 )
    return 3221225485LL;
  a3[66] = 0;
  v12 = -1LL;
  v13 = (_QWORD **)(v10 + 136);
  v14 = *v13;
  while ( v14 != v13 )
  {
    v15 = v14;
    v14 = (_QWORD *)*v14;
    if ( v15[3] > v12 )
    {
      v12 = v15[3];
      a3[66] = *((_DWORD *)v15 + 4);
    }
  }
  return 0LL;
}
