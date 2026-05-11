/*
 * XREFs of USBDeviceSetPowerState @ 0x14003FEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     USBHwStopAllMIDIPipes @ 0x14002D30C (USBHwStopAllMIDIPipes.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x14003626C (USBHwSelectStreamingMIDIInterface.c)
 */

__int64 __fastcall USBDeviceSetPowerState(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  unsigned int v5; // esi
  __int64 v6; // r15
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ebx
  void (__fastcall **v10)(__int64, __int64); // rdi
  _QWORD **v11; // rdi
  _QWORD *v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  void (__fastcall **v15)(__int64, __int64); // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v5 = *(_DWORD *)(v2 + 192);
  v6 = *(_QWORD *)(v2 + 200);
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 || (unsigned int)(v8 - 1) <= 1 )
    {
      v9 = 0;
      v3 = USBHwStopAllMIDIPipes(a1);
      if ( v5 )
      {
        v10 = (void (__fastcall **)(__int64, __int64))(v6 + 152);
        do
        {
          if ( *v10 )
            (*v10)(a1, v6 + 168LL * v9);
          ++v9;
          v10 += 21;
        }
        while ( v9 < v5 );
      }
    }
  }
  else
  {
    v11 = (_QWORD **)(*(_QWORD *)(v2 + 72) + 192LL);
    v12 = *v11;
    if ( *v11 != v11 )
    {
      do
      {
        if ( v12 == v11 )
          break;
        v13 = USBHwSelectStreamingMIDIInterface(a1, (__int64)v12, 0);
        v12 = (_QWORD *)*v12;
        v3 = v13;
      }
      while ( v13 >= 0 );
    }
    v14 = 0;
    if ( v5 )
    {
      v15 = (void (__fastcall **)(__int64, __int64))(v6 + 160);
      do
      {
        if ( *v15 )
          (*v15)(a1, v6 + 168LL * v14);
        ++v14;
        v15 += 21;
      }
      while ( v14 < v5 );
    }
  }
  return v3;
}
