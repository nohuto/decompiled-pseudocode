/*
 * XREFs of PopEtIsrDpcQuery @ 0x140A24780
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x140860740 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall PopEtIsrDpcQuery(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  void *result; // rax
  unsigned __int64 v5; // r11
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r9
  _BYTE v15[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = *(_OWORD **)(a1 + 1640);
  memset_0(v15, 0, sizeof(v15));
  result = memset_0(a2, 0, 0x1B8uLL);
  v5 = KeActiveProcessors.Bitmap[0];
  LOWORD(v6) = 0;
  while ( 1 )
  {
    while ( v5 )
    {
      _BitScanForward64(&v7, v5);
      v8 = 4LL;
      v5 &= ~(1LL << v7);
      v9 = v15;
      v10 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v6 + (unsigned __int8)v7)]
          - (_QWORD)v15;
      do
      {
        v11 = 2LL;
        do
        {
          *v9 = *(_QWORD *)((char *)v9 + v10 + 34688);
          ++v9;
          --v11;
        }
        while ( v11 );
        --v8;
      }
      while ( v8 );
      v12 = a2;
      v13 = 4LL;
      do
      {
        v14 = 2LL;
        do
        {
          result = *(void **)((char *)v12 + v15 - (_BYTE *)a2);
          *v12++ += result;
          --v14;
        }
        while ( v14 );
        --v13;
      }
      while ( v13 );
    }
    v6 = (unsigned __int16)(v6 + 1);
    if ( (unsigned int)v6 >= KeActiveProcessors.Count )
      break;
    v5 = KeActiveProcessors.Bitmap[v6];
  }
  *v2 = *a2;
  v2[1] = a2[1];
  v2[2] = a2[2];
  v2[3] = a2[3];
  return result;
}
