/*
 * XREFs of PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140AA5978
 * Callers:
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x140A9BCC0 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 */

ULONGLONG __fastcall PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets(__int64 a1, __int64 a2)
{
  ULONGLONG *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  ULONGLONG *v8; // rsi
  __int64 v9; // r15
  ULONGLONG *v10; // rsi
  int v11; // eax
  __int64 v12; // rdi
  ULONGLONG *v13; // rbx
  ULONGLONG result; // rax

  *(_DWORD *)a2 = *(_DWORD *)a1;
  *(_QWORD *)(a2 + 8) = PpmConvertTimeTo(*(_QWORD *)(a1 + 8), 0xF4240uLL);
  *(_QWORD *)(a2 + 16) = PpmConvertTimeTo(*(_QWORD *)(a1 + 16), 0xF4240uLL);
  *(_QWORD *)(a2 + 24) = PpmConvertTimeTo(*(_QWORD *)(a1 + 24), 0xF4240uLL);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 68) = *(_OWORD *)(a1 + 68);
  *(_OWORD *)(a2 + 84) = *(_OWORD *)(a1 + 84);
  *(_QWORD *)(a2 + 100) = *(_QWORD *)(a1 + 100);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a1 + 108);
  *(_QWORD *)(a2 + 112) = PpmConvertTimeTo(*(_QWORD *)(a1 + 120), 0xF4240uLL);
  v4 = (ULONGLONG *)(a2 + 144);
  v5 = 5LL;
  v6 = a1 - a2;
  v7 = 5LL;
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a1 + 128);
  *(_DWORD *)(a2 + 136) = *(_DWORD *)(a1 + 144);
  do
  {
    *v4 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v4 + v6 + 8), 0xF4240uLL);
    ++v4;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)(a2 + 184) = PpmConvertTimeTo(*(_QWORD *)(a1 + 192), 0xF4240uLL);
  v8 = (ULONGLONG *)(a2 + 216);
  v9 = 5LL;
  *(_OWORD *)(a2 + 192) = *(_OWORD *)(a1 + 200);
  *(_DWORD *)(a2 + 208) = *(_DWORD *)(a1 + 216);
  do
  {
    *v8 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v8 + v6 + 8), 0xF4240uLL);
    ++v8;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)(a2 + 256) = PpmConvertTimeTo(*(_QWORD *)(a1 + 264), 0xF4240uLL);
  v10 = (ULONGLONG *)(a2 + 288);
  *(_OWORD *)(a2 + 264) = *(_OWORD *)(a1 + 272);
  *(_DWORD *)(a2 + 280) = *(_DWORD *)(a1 + 288);
  do
  {
    *v10 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v10 + v6 + 8), 0xF4240uLL);
    ++v10;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a2 + 328) = PpmConvertTimeTo(*(_QWORD *)(a1 + 336), 0xF4240uLL);
  *(_QWORD *)(a2 + 336) = *(_QWORD *)(a1 + 344);
  v11 = *(_DWORD *)(a1 + 352);
  v12 = 3LL;
  *(_DWORD *)(a2 + 344) = v11;
  v13 = (ULONGLONG *)(a2 + 352);
  do
  {
    result = PpmConvertTimeTo(*(ULONGLONG *)((char *)v13 + v6 + 8), 0xF4240uLL);
    *v13++ = result;
    --v12;
  }
  while ( v12 );
  return result;
}
