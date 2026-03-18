/*
 * XREFs of VidSchiLogInterrupt @ 0x140006960
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1400067D0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x14004A540 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall VidSchiLogInterrupt(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  LARGE_INTEGER *v10; // rdi
  unsigned __int8 v11; // cf

  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v6 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + a1 + 88);
      goto LABEL_5;
    case 2:
      v6 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + a1 + 88);
      goto LABEL_5;
    case 9:
      v6 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a1 + 88);
LABEL_5:
      v7 = *(__int64 **)(a1 + 688);
      v8 = (unsigned int)v6;
      if ( (unsigned int)v6 < *(_DWORD *)(a1 + 760) )
        v7 += v6;
      v9 = *v7;
      v10 = (LARGE_INTEGER *)(*(_QWORD *)(v9 + 200) + 96LL * *(unsigned int *)(v9 + 212));
      memset(v10, 0, 0x60uLL);
      v10[10] = KeQueryPerformanceCounter(0LL);
      BYTE3(v10[11].QuadPart) = 1;
      *(_DWORD *)(v9 + 212) = (*(_DWORD *)(v9 + 212) + 1) & (*(_DWORD *)(v9 + 208) - 1);
      LOBYTE(v10[11].LowPart) = a3;
      v11 = _bittest64(*(const signed __int64 **)(a1 + 648), v8);
      goto LABEL_8;
    case 0xB:
      goto LABEL_18;
    case 0xC:
      v6 = *(_DWORD *)(a2 + 40) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 44) + a1 + 88);
      goto LABEL_5;
    case 0xF:
    case 0x10:
LABEL_18:
      v6 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + a1 + 88);
      goto LABEL_5;
    case 0x11:
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 16LL);
      v10 = (LARGE_INTEGER *)(*(_QWORD *)(v9 + 200) + 96LL * *(unsigned int *)(v9 + 212));
      memset(v10, 0, 0x60uLL);
      v10[10] = KeQueryPerformanceCounter(0LL);
      BYTE3(v10[11].QuadPart) = 1;
      *(_DWORD *)(v9 + 212) = (*(_DWORD *)(v9 + 212) + 1) & (*(_DWORD *)(v9 + 208) - 1);
      LOBYTE(v10[11].LowPart) = a3;
      v11 = _bittest64(*(const signed __int64 **)(a1 + 648), *(unsigned __int16 *)(v9 + 4));
LABEL_8:
      BYTE2(v10[11].u.LowPart) = !v11;
      BYTE1(v10[11].LowPart) = *(_DWORD *)(v9 + 16) == 1;
      *(_OWORD *)&v10->LowPart = *(_OWORD *)a2;
      *(_OWORD *)&v10[2].LowPart = *(_OWORD *)(a2 + 16);
      *(_OWORD *)&v10[4].LowPart = *(_OWORD *)(a2 + 32);
      *(_OWORD *)&v10[6].LowPart = *(_OWORD *)(a2 + 48);
      *(_OWORD *)&v10[8].LowPart = *(_OWORD *)(a2 + 64);
      break;
  }
}
