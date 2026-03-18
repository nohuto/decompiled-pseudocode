/*
 * XREFs of InitClientInfo @ 0x14015DD28
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1401A7780 (InitSystemThread.c)
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A3D8C (Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int32 v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx

  v5 = *(_QWORD *)(a1 + 520);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 672);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0);
  v7 = v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 28LL) = v6;
  *(_QWORD *)(*(_QWORD *)(a1 + 520) + 208LL) = 0LL;
  v8 = *(_QWORD *)(a1 + 480);
  if ( v8 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 520) + 152LL) = *(_WORD *)(v8 + 72);
    v7 = *(_QWORD *)(a1 + 520);
    *(_QWORD *)(v7 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 520) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 520) + 144LL) = 0LL;
  }
  v9 = 0;
  if ( (unsigned int)IsCurrentProcessDwm(v7, v5, a3, a4) )
    v9 = 36;
  if ( *(int *)(*(_QWORD *)(a1 + 464) + 12LL) < 0 )
  {
    if ( (unsigned int)Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline(36LL) )
      v9 |= 4u;
    else
      v9 |= 2u;
  }
  v10 = *(_QWORD *)(a1 + 464);
  if ( (*(_DWORD *)(v10 + 816) & 0x800LL) != 0 )
    v9 |= 4u;
  if ( (*(_DWORD *)(v10 + 12) & 0x20000000) != 0 )
    v9 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 520) + 224LL) |= v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 232LL) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 236LL) = 0;
  *(_QWORD *)(a1 + 408) = *(_QWORD *)(a1 + 520) + 232LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 240LL) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(*(_QWORD *)(a1 + 520) + 244LL) = 0;
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(a1 + 520) + 240LL;
  return 1LL;
}
