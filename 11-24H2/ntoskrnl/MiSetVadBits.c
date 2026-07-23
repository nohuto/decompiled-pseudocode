/*
 * XREFs of MiSetVadBits @ 0x140919600
 * Callers:
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiUpdateVadBits @ 0x140A705BC (MiUpdateVadBits.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 */

void __fastcall MiSetVadBits(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  _KPROCESS *Process; // rcx
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  BOOL v12; // ebx

  v1 = 0;
  v2 = ((unsigned __int64)*(unsigned int *)(a1 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 28);
  v3 = ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 28);
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = (__int64)&Process[2].ActiveProcessors[2].StaticBitmap[29];
  if ( Process[2].ActiveProcessors[3].StaticBitmap[23] )
  {
    v6 = 0LL;
    do
    {
      v7 = (_QWORD *)(v5 + 72 * v6);
      v8 = (unsigned __int64)(-524288 * qword_140E2F3C8 + (v7[1] << 19)) >> 16;
      if ( v3 >= v8 )
      {
        v9 = v8 + *v7;
        if ( v2 < v9 )
        {
          v10 = v9 - 1;
          v11 = (unsigned __int64)(-524288 * qword_140E2F3C8 + (v7[1] << 19)) >> 16;
          if ( v2 >= v8 )
            v11 = v2;
          v12 = v2 < v8;
          if ( v3 >= v9 )
            v12 = 1;
          else
            v10 = v3;
          RtlSetBitsEx((__int64)v7, v11 - v8, v10 - v11 + 1);
          if ( !v12 )
            break;
        }
      }
      v6 = ++v1;
    }
    while ( (unsigned __int64)v1 < *(_QWORD *)(v5 + 216) );
  }
}
