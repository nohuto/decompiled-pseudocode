/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1400F0BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1400474A8 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UpdateTransform@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAXAEBUtagINPUT_TRANSFORM@@@Z @ 0x14010A604 (-UpdateTransform@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAXAEBUtagINPUT_TR.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(char *a1, unsigned int a2)
{
  int v4; // edi
  __int64 i; // rsi
  PVOID Object[12]; // [rsp+20h] [rbp-C8h] BYREF
  _OWORD v8[6]; // [rsp+80h] [rbp-68h] BYREF

  Object[1] = a1;
  if ( UserIsCurrentProcessDwm() )
  {
    v4 = 0;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      LODWORD(Object[0]) = i;
      if ( v4 < 0 || (unsigned int)i >= a2 )
        break;
      memset(&Object[2], 0, 0x48uLL);
      memset(v8, 0, 0x48uLL);
      RtlCopyFromUser(v8, &a1[72 * i], 0x48uLL);
      *(_OWORD *)&Object[2] = v8[0];
      *(_OWORD *)&Object[4] = v8[1];
      *(_OWORD *)&Object[6] = v8[2];
      *(_OWORD *)&Object[8] = v8[3];
      Object[10] = *(PVOID *)&v8[4];
      Object[0] = 0LL;
      v4 = CompositionInputObject::ResolveHandle(Object[2], 2u, 1, (struct CompositionInputObject **)Object);
      if ( v4 >= 0 )
      {
        CompositionInputObject::UpdateTransform((char *)Object[0], (const struct tagINPUT_TRANSFORM *)&Object[3]);
        InputTraceLogging::InputSink::UpdateTransform(
          (const struct CompositionInputObject *)Object[0],
          Object[2],
          (const struct tagINPUT_TRANSFORM *)&Object[3]);
        ObfDereferenceObject(Object[0]);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
