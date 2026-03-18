/*
 * XREFs of ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1401E18E8
 * Callers:
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x14022C46C (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::IsSingleThreadAttached(tagQ *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 66);
  if ( v1 && !*(_QWORD *)(v1 + 1688) )
  {
    return !*((_QWORD *)this + 67);
  }
  else
  {
    v2 = *((_QWORD *)this + 67);
    if ( !v2 )
      return 0;
    return *(_QWORD *)(v2 + 1696) == 0LL;
  }
}
