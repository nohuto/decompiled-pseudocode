/*
 * XREFs of RtlpHpMetadataFree @ 0x140459100
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140601B74 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x140601F0C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpHeapDestroy @ 0x14060271C (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140604814 (RtlpHpLargeAllocationDestroy.c)
 *     ExpSecurePoolCreate @ 0x140656D00 (ExpSecurePoolCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407C65CC (ExpPrivatePoolDestroy.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x14035BCF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x14035BF90 (RtlpHpSegFreeInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpLogHeapFreeEvent @ 0x1405F0A00 (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpMetadataFree(ULONG_PTR a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  ULONG_PTR v5; // rsi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r10
  ULONG_PTR v9; // r10
  ULONG_PTR v10; // rdx
  char v11; // cl
  ULONG_PTR v12; // r8
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 result; // rax
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (unsigned __int8)BYTE1(*a2);
  v16 = 0;
  v5 = qword_140E6BD98[2 * (unsigned int)dword_14001EB70[v3]];
  if ( (_WORD)a1 )
  {
    v7 = 0;
  }
  else
  {
    v6 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68510, 2 * ((a1 - qword_140E68508) >> 20));
    if ( !v6 || (v7 = v6 - 1, (_DWORD)v6 == 3) )
    {
      RtlpHpLargeFree(v5, a1);
      v2 = 3;
      goto LABEL_13;
    }
  }
  v8 = 512LL;
  if ( v7 != 1 )
    v8 = 320LL;
  v9 = v5 + v8;
  v10 = *(_QWORD *)v9 & a1;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v10 + 0x10) ^ v10) == v9 )
  {
    v11 = *(_BYTE *)(v9 + 8);
    v12 = v10 + 32 * ((unsigned __int64)(unsigned int)(a1 - v10) >> v11);
    v13 = -32LL * *(unsigned __int8 *)(v12 + 26) + v12;
    v14 = v10 + ((__int64)(v13 - v10) >> 5 << v11);
    if ( *(_BYTE *)(v13 + 24) + (v14 == a1) == 11 )
    {
      RtlpHpLfhContextFree(*(ULONG_PTR **)(v9 + 24), v14, a1);
      v2 = 2;
    }
    else
    {
      RtlpHpSegFreeInternal((__int64 *)v9, a1, v13, &v16);
      v2 = v16;
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v9 + 56), a1, 0LL, 0LL, 0LL);
  }
LABEL_13:
  result = *(unsigned int *)(v5 + 20);
  if ( (result & 0x80u) != 0LL )
    return RtlpLogHeapFreeEvent(v5, a1, v2);
  return result;
}
