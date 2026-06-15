/*
 * XREFs of ?ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIStreamGroupProxy@@@Z @ 0x180077640
 * Callers:
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BE720 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?ForEachStream@@YAX$$QEAV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18010C1DC (-ForEachStream@@YAX$$QEAV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 */

__int64 __fastcall CAudioResourceManager::ReevaluateStreamsOnStreamGroup(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IStreamGroupProxy *a3)
{
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-19h]
  __int64 (__fastcall **v6)(); // [rsp+40h] [rbp+7h] BYREF
  __int128 v7; // [rsp+48h] [rbp+Fh]
  struct EndpointCharacteristicsDescriptor **v8; // [rsp+58h] [rbp+1Fh]
  __int64 (__fastcall ***v9)(); // [rsp+78h] [rbp+3Fh]
  struct EndpointCharacteristicsDescriptor *v10; // [rsp+A8h] [rbp+6Fh] BYREF
  struct IStreamGroupProxy *v11; // [rsp+B0h] [rbp+77h] BYREF

  v11 = a3;
  v10 = a2;
  *(_QWORD *)&v5 = &v11;
  *((_QWORD *)&v5 + 1) = (char *)this - 8;
  v6 = off_18017ACD8;
  v9 = &v6;
  v7 = v5;
  v8 = &v10;
  ForEachStream(&v6);
  std::_Func_class<void,>::_Tidy((__int64)&v6, v3);
  return 0LL;
}
