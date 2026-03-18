/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C00E10B4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxClientLoadImage @ 0x1C00DE800 (xxxClientLoadImage.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00DEF68 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00DFB00 (RtlInitUnicodeStringOrId.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned __int8 *Image; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagCURSOR *v9; // rbp
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned __int8 *v17; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  DestinationString = 0LL;
  for ( i = 0; i < 7; ++i )
  {
    while ( 1 )
    {
      v3 = 552LL * i;
      FastGetProfileStringFromIDW(
        a1,
        5LL,
        *(unsigned __int16 *)((char *)&gasysico + v3 + 2),
        &word_1C03123AC,
        SourceString,
        260,
        0);
      if ( SourceString[0] )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v5 = 592;
      }
      else
      {
        RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(i + 100));
        v5 = 576;
      }
      Image = xxxClientLoadImage((void **)&DestinationString, v4, 1u, 0, 0, v5);
      if ( Image && (*((_DWORD *)Image + 20) & 0x40) == 0 )
        zzzSetSystemImage((struct tagCURSOR *)Image, *(struct tagCURSOR **)((char *)&gasysico + v3 + 8));
      if ( i != 5 )
        break;
      v9 = (struct tagCURSOR *)_HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL));
      if ( !v9 )
        break;
      DpiForSystem = GetDpiForSystem(v8, v7);
      DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
      v14 = GetDpiForSystem(v13, v12);
      v15 = GetDpiDependentMetric(20LL, v14);
      v17 = xxxClientLoadImage((void **)&DestinationString, v16, 1u, v15, DpiDependentMetric, v5);
      if ( !v17 || (*((_DWORD *)v17 + 20) & 0x40) != 0 )
        break;
      zzzSetSystemImage((struct tagCURSOR *)v17, v9);
      i = 6;
    }
  }
}
