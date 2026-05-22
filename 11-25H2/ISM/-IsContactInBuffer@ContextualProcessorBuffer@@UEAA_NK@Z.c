/*
 * XREFs of ?IsContactInBuffer@ContextualProcessorBuffer@@UEAA_NK@Z @ 0x18003FC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ContextualProcessorBuffer::IsContactInBuffer(ContextualProcessorBuffer *this, int a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = HIBYTE(a2);
  v4 = BYTE2(a2);
  v5 = BYTE1(a2);
  while ( 1 )
  {
    if ( v2 == *((_QWORD **)this + 4) )
      return 0;
    v7 = (_QWORD *)(v2[4]
                  + 16
                  * (v2[7] & (0x100000001B3LL
                            * (v3 ^ (0x100000001B3LL
                                   * (v4 ^ (0x100000001B3LL
                                          * (v5 ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL))))))))));
    v8 = v7[1];
    if ( v8 == v2[2] )
    {
LABEL_7:
      v8 = 0LL;
    }
    else
    {
      while ( a2 != *(_DWORD *)(v8 + 16) )
      {
        if ( v8 == *v7 )
          goto LABEL_7;
        v8 = *(_QWORD *)(v8 + 8);
      }
    }
    if ( v8 )
      return 1;
    v2 += 28;
  }
}
