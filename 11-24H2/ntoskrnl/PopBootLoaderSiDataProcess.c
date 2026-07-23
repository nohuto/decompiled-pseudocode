/*
 * XREFs of PopBootLoaderSiDataProcess @ 0x140B6F990
 * Callers:
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     BapdRemoveWbclData @ 0x140B4D30C (BapdRemoveWbclData.c)
 *     BapdRegisterSiData @ 0x140B6D748 (BapdRegisterSiData.c)
 */

void PopBootLoaderSiDataProcess()
{
  __int64 v0; // rcx
  _DWORD *v1; // rsi
  unsigned int v2; // ebx
  unsigned int *v3; // rdi
  unsigned int v4; // edx

  if ( BugCheckParameter4 )
  {
    v0 = *(_QWORD *)(BugCheckParameter4 + 232);
    if ( v0 )
    {
      v1 = *(_DWORD **)(v0 + 32);
      BapdRemoveWbclData();
      if ( *v1 == 1281517896 )
      {
        v2 = 1;
        v3 = v1 + 4;
        do
        {
          v4 = v3[1];
          if ( v4 )
            BapdRegisterSiData((_DWORD *)((char *)v1 + *v3), v4, v2);
          ++v2;
          v3 += 2;
        }
        while ( v2 <= 2 );
      }
    }
  }
}
