/*
 * XREFs of HalpRegisterDeviceInUse @ 0x140B77C94
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x140B77A80 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     HalpMmAllocateMemory @ 0x140540604 (HalpMmAllocateMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     HalpFindDevice @ 0x140B77770 (HalpFindDevice.c)
 */

__int64 __fastcall HalpRegisterDeviceInUse(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v4; // rbp
  unsigned int v5; // esi
  ULONG_PTR v6; // r14
  _QWORD *Memory; // rax
  _QWORD *v8; // rbx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  _QWORD *v12; // rax

  v1 = *(_DWORD *)(a1 + 220);
  if ( v1 != 3 )
  {
    if ( v1 > 1 )
      return 3221225485LL;
    if ( !HalpFindDevice(a1) )
    {
      v4 = 2LL;
      v5 = *(_DWORD *)(a1 + 232) + 2;
      v6 = (unsigned int)(*(_DWORD *)(a1 + 232) + 298);
      if ( HalpMmLoaderBlock )
        Memory = (_QWORD *)HalpMmAllocateMemory((unsigned int)(*(_DWORD *)(a1 + 232) + 298));
      else
        Memory = (_QWORD *)ExAllocatePool2(0x100uLL, v6, 0x646C6148uLL);
      v8 = Memory;
      if ( !Memory )
        return 3221225626LL;
      memset_0(Memory, 0, v6);
      v9 = v8 + 3;
      v10 = (_OWORD *)a1;
      v8[2] = v8 + 3;
      do
      {
        *v9 = *v10;
        v9[1] = v10[1];
        v9[2] = v10[2];
        v9[3] = v10[3];
        v9[4] = v10[4];
        v9[5] = v10[5];
        v9[6] = v10[6];
        v9 += 8;
        v11 = v10[7];
        v10 += 8;
        *(v9 - 1) = v11;
        --v4;
      }
      while ( v4 );
      *v9 = *v10;
      if ( *(_DWORD *)(a1 + 220) == 1 && *(_QWORD *)(a1 + 224) )
      {
        v8[31] = v8 + 37;
        wcscpy_s(*(wchar_t **)(v8[2] + 224LL), (unsigned __int64)v5 >> 1, *(const wchar_t **)(a1 + 224));
      }
      v12 = (_QWORD *)qword_140F8EF90;
      if ( *(__int64 **)qword_140F8EF90 != &qword_140F8EF88 )
        __fastfail(3u);
      *v8 = &qword_140F8EF88;
      v8[1] = v12;
      *v12 = v8;
      ++DevicesList;
      qword_140F8EF90 = (__int64)v8;
    }
  }
  return 0LL;
}
