/*
 * XREFs of ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14020E33C
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x140063770 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14020E3C4 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostOrComponentThreadOf(const struct tagTHREADINFO *a1, const struct tagWND *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _QWORD *i; // rdi
  const struct tagWND *v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( CoreWindowProp::IsHostThreadOf(a1, a2) )
  {
    return 1;
  }
  else
  {
    v9 = 0LL;
    if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a2, &v9) )
    {
      for ( i = *(_QWORD **)(v9 + 40); i; i = (_QWORD *)*i )
      {
        v8 = (const struct tagWND *)i[1];
        if ( v8
          && (unsigned int)CoreWindowProp::IsComponent(v8, v5)
          && a1 == *(const struct tagTHREADINFO **)(i[1] + 16LL) )
        {
          return 1;
        }
      }
    }
  }
  return v4;
}
