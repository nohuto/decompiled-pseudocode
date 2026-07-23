/*
 * XREFs of HalpTimerUnmapInterrupt @ 0x1405462D0
 * Callers:
 *     HalpTimerInitializeClock @ 0x1405445B4 (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547D50 (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpInterruptLineToGsi @ 0x14049A1F8 (HalpInterruptLineToGsi.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 */

void __fastcall HalpTimerUnmapInterrupt(__int64 a1, int a2, int a3, char a4)
{
  int v5; // edi
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14[4]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v15[3]; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v17[6]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  int v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+74h] [rbp-5h]
  _DWORD v22[10]; // [rsp+78h] [rbp-1h] BYREF

  *(_QWORD *)v14 = 0LL;
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 0x40) != 0 )
  {
    v9 = v5 & 0xFFFFFFBF;
    *(_DWORD *)(a1 + 184) = v9;
    memset_0(v15, 0, 0x58uLL);
    v15[1] = a2;
    v18 = v18 & 0xC0000000 | a3 & 0x3FFFFFFF | 0x40000000;
    if ( a4 || (v9 & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 236);
      v16 = 0;
      v19 = v13;
      v20 = *(_DWORD *)(a1 + 232);
      v21 = *(_DWORD *)(a1 + 240);
      v15[0] = 3;
      v17[0] = 1;
LABEL_15:
      HalpInterruptUnmap(
        **(_DWORD **)(a1 + 288),
        *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
        *(_QWORD *)(a1 + 288) + 8,
        0,
        (__int64)v15,
        1);
      return;
    }
    v10 = *(_DWORD *)(a1 + 224);
    if ( (v10 & 0x200) != 0 )
    {
      if ( (int)HalpInterruptGsiToLine(*(_DWORD *)(a1 + 88), v14) < 0 )
        return;
    }
    else if ( (v10 & 0x100) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 84);
      if ( v11 >= 8 )
      {
        v14[0] = 45057;
        v11 -= 8;
      }
      else
      {
        v14[0] = 45056;
      }
      v14[1] = v11;
    }
    v12 = *(_DWORD *)(a1 + 96);
    v15[0] = 0;
    v17[0] = v12;
    v16 = *(_DWORD *)(a1 + 92);
    HalpInterruptApplyOverrides((__int64)v14, &v16, v17);
    if ( (int)HalpInterruptLineToGsi(v14, v22) >= 0 )
      goto LABEL_15;
  }
}
