/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x14024E1C0
 * Callers:
 *     DpiPdoAddPdo @ 0x1403C8AA0 (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x140055B00 (DpiIsValidEdid.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1402677EC (-MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int MonitorDescriptorIDs; // esi
  __int64 v7; // r14
  __m128i *v9; // rcx
  __int64 v10; // rdx
  void *Pool2; // rax
  _OWORD *v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  _OWORD *v15; // rbx
  __int128 v16; // xmm1

  v4 = *(_QWORD *)(a1 + 64);
  MonitorDescriptorIDs = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( *(_DWORD *)(v4 + 496) == 1 && !*(_QWORD *)(a2 + 8) )
  {
    MonitorDescriptorIDs = MonitorGetMonitorDescriptorIDs(
                             *(void **)(v7 + 4032),
                             *(_DWORD *)(v4 + 504),
                             (struct _DXGK_GENERIC_DESCRIPTOR *)(v4 + 512));
    if ( MonitorDescriptorIDs >= 0 )
      return 0LL;
  }
  v9 = *(__m128i **)(a2 + 8);
  if ( v9 && (*(_DWORD *)(v4 + 496) != 1 || DpiIsValidEdid(v9)) )
  {
    v10 = *(unsigned int *)(a2 + 4);
    *(_DWORD *)(v4 + 924) = v10;
    Pool2 = (void *)ExAllocatePool2(256LL, v10, 1953656900LL, a4);
    *(_QWORD *)(v4 + 928) = Pool2;
    if ( Pool2 )
    {
      v12 = *(_OWORD **)(a2 + 8);
      memmove(Pool2, v12, *(unsigned int *)(a2 + 4));
      v13 = *(_DWORD *)(v4 + 496);
      if ( v13 == 1 )
      {
        MonitorGetMonitorDescriptorIDs(
          *(void **)(v7 + 4032),
          *(_DWORD *)(v4 + 504),
          (struct _DXGK_GENERIC_DESCRIPTOR *)(v4 + 512));
      }
      else if ( ((v13 - 2) & 0xFFFFFFFD) != 0 )
      {
        MonitorDescriptorIDs = -1073741823;
        WdLogSingleEntry1(2LL, -1073741823LL);
        WdLogGlobalForLineNumber = 3200;
      }
      else
      {
        v14 = 3LL;
        v15 = (_OWORD *)(v4 + 512);
        do
        {
          *v15 = *v12;
          v15[1] = v12[1];
          v15[2] = v12[2];
          v15[3] = v12[3];
          v15[4] = v12[4];
          v15[5] = v12[5];
          v15[6] = v12[6];
          v15 += 8;
          v16 = v12[7];
          v12 += 8;
          *(v15 - 1) = v16;
          --v14;
        }
        while ( v14 );
        *v15 = *v12;
        *((_QWORD *)v15 + 2) = *((_QWORD *)v12 + 2);
      }
    }
    else
    {
      MonitorDescriptorIDs = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 3155;
    }
  }
  else
  {
    memset((void *)(v4 + 512), 0, 0x198uLL);
    MonitorDescriptorIDs = -1073741823;
    WdLogSingleEntry1(4LL, -1073741823LL);
    WdLogGlobalForLineNumber = 3131;
  }
  return (unsigned int)MonitorDescriptorIDs;
}
