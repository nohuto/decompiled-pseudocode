/*
 * XREFs of ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180057C20
 * Callers:
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180057724 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x1800578D0 (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall HampAppInfoValidateAndCapture(
        char *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        struct _HAM_APPLICATION_INFO *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct _HAM_APPLICATION_INFO *v11; // rcx
  signed __int64 v12; // rsi
  __int16 v13; // ax
  struct _HAM_APPLICATION_INFO *v14; // rax

  v9 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a1) )
  {
    if ( a3 >= 0xC && RtlValidSid(a2) && RtlLengthSid(a2) == a3 )
    {
      memset_0(a5, 0, 0x218uLL);
      if ( (unsigned __int8)PsmIsValidKey(a1) && RtlValidSid(a2) )
        RtlLengthSid(a2);
      v10 = 232LL;
      v11 = a5;
      v12 = a1 - (char *)a5;
      do
      {
        if ( v10 == -2147483414 )
          break;
        v13 = *(_WORD *)((char *)v11 + v12);
        if ( !v13 )
          break;
        *(_WORD *)v11 = v13;
        v11 = (struct _HAM_APPLICATION_INFO *)((char *)v11 + 2);
        --v10;
      }
      while ( v10 );
      v14 = (struct _HAM_APPLICATION_INFO *)((char *)v11 - 2);
      if ( v10 )
        v14 = v11;
      *(_WORD *)v14 = 0;
      RtlCopySid(0x44u, (char *)a5 + 464, a2);
      *((_DWORD *)a5 + 133) = a4;
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v9;
}
