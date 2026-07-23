/*
 * XREFs of XmDivOp @ 0x140574840
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 */

_WORD *__fastcall XmDivOp(__int64 a1)
{
  unsigned __int64 v1; // r8
  int v2; // eax
  unsigned int v3; // ett
  unsigned int v4; // r10d
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int16 *v7; // r11
  unsigned __int64 v8; // rtt
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h]

  v1 = *(unsigned int *)(a1 + 108);
  if ( !(_DWORD)v1 )
    longjmp((_JBTYPE *)(a1 + 160), 2);
  v2 = *(_DWORD *)(a1 + 120);
  if ( v2 )
  {
    v7 = (unsigned __int16 *)(a1 + 32);
    if ( v2 == 1 )
    {
      v4 = *v7;
      v8 = *(unsigned __int16 *)(a1 + 24) | (unsigned __int64)(v4 << 16);
      LODWORD(v5) = v8 % (unsigned int)v1;
      LODWORD(v6) = v8 / (unsigned int)v1;
    }
    else
    {
      v4 = *(_DWORD *)v7;
      LODWORD(v13) = *(_DWORD *)(a1 + 24);
      HIDWORD(v13) = *(_DWORD *)v7;
      v6 = v13 / v1;
      v5 = v13 % v1;
    }
  }
  else
  {
    v3 = *(unsigned __int16 *)(a1 + 24);
    v4 = v3 >> 8;
    LODWORD(v5) = v3 % (unsigned int)v1;
    LODWORD(v6) = v3 / (unsigned int)v1;
  }
  if ( v4 >= (unsigned int)v1 )
    longjmp((_JBTYPE *)(a1 + 160), 3);
  XmStoreResult(a1, v6);
  *(_QWORD *)(v9 + 88) = v10;
  return XmStoreResult(v11, v5);
}
