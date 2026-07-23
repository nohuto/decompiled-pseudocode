/*
 * XREFs of RtlpHpLfhOwnerInitialize @ 0x1403D7EC4
 * Callers:
 *     RtlpHpLfhSlotInitialize @ 0x1403D7E64 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhBucketInitialize @ 0x140603ACC (RtlpHpLfhBucketInitialize.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x1403D970C (RtlpHpInitializeLock.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerInitialize(__int64 a1, char a2, char a3, __int64 a4)
{
  _QWORD *v4; // r10
  _QWORD *result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)a1 = a3 & 1 | (2 * a2);
  RtlpHpInitializeLock(a1 + 16, *(unsigned __int8 *)(a4 + 65));
  result = v4 + 5;
  v4[4] = v4 + 3;
  v4[3] = v4 + 3;
  v4[6] = v4 + 5;
  v4[5] = v4 + 5;
  return result;
}
