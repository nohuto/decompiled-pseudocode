/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x14013495C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     xxxClientLoadImage @ 0x1401338E8 (xxxClientLoadImage.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1401343B0 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  unsigned int v7; // esi
  unsigned __int8 *Image; // rax
  struct tagCURSOR *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  struct tagCURSOR *v12; // rbp
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-248h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-238h] BYREF

  DestinationString = 0LL;
  v2 = 0;
  v3 = a1;
  do
  {
    while ( 1 )
    {
      v4 = 552LL * v2;
      UserSessionState = W32GetUserSessionState(a1, a2);
      FastGetProfileStringFromIDW(
        v3,
        5LL,
        *(unsigned __int16 *)(UserSessionState + v4 + 32418),
        &pszFormat,
        SourceString,
        260,
        0);
      if ( SourceString[0] )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v7 = 592;
      }
      else
      {
        *(_DWORD *)&DestinationString.Length = 0;
        v7 = 576;
        DestinationString.Buffer = (PWSTR)(unsigned __int16)(v2 + 100);
      }
      Image = xxxClientLoadImage((void **)&DestinationString, v6, 1u, 0, 0, v7);
      v9 = (struct tagCURSOR *)Image;
      if ( Image )
      {
        a1 = *((unsigned int *)Image + 20);
        if ( (a1 & 0x40) == 0 )
        {
          v10 = W32GetUserSessionState(a1, a2);
          zzzSetSystemImage(v9, *(struct tagCURSOR **)(v10 + v4 + 32424));
        }
      }
      if ( v2 != 5 )
        break;
      v11 = W32GetUserSessionState(a1, a2);
      v12 = (struct tagCURSOR *)_HMObjectFromHandle(*(_QWORD *)(*(_QWORD *)(v11 + 19928) + 6968LL));
      if ( !v12 )
        break;
      DpiForSystem = GetDpiForSystem(a1);
      DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
      v16 = GetDpiForSystem(v15);
      v17 = GetDpiDependentMetric(20, v16);
      v19 = xxxClientLoadImage((void **)&DestinationString, v18, 1u, v17, DpiDependentMetric, v7);
      if ( !v19 )
        break;
      a1 = *((unsigned int *)v19 + 20);
      if ( (a1 & 0x40) != 0 )
        break;
      zzzSetSystemImage((struct tagCURSOR *)v19, v12);
      v2 = 6;
    }
    ++v2;
  }
  while ( v2 < 7 );
}
