/*
 * XREFs of ?XInputWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18035ECE0
 * Callers:
 *     ?StaticXInputWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x18035BC60 (-StaticXInputWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z @ 0x180357C08 (-ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z.c)
 */

DWORD __fastcall GamingOverlayExperienceManager::XInputWatcherThread(HANDLE *this)
{
  char v2; // r14
  _BYTE *v3; // rsi
  __int64 v4; // rdi
  DWORD *v5; // rbx
  DWORD TickCount; // r15d
  DWORD v7; // edx
  _BYTE *v8; // r8
  unsigned int v9; // r9d
  _DWORD *v10; // r10
  unsigned int v11; // ecx
  DWORD result; // eax
  _DWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v14[4]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF

  v13[0] = 0;
  v15 = 0LL;
  v14[0] = GetTickCount();
  v14[1] = v14[0];
  v14[2] = v14[0];
  v14[3] = v14[0];
  do
  {
    v2 = 0;
    v3 = v13;
    v4 = 0LL;
    v5 = v14;
    TickCount = GetTickCount();
    do
    {
      if ( !*v3 )
      {
        if ( TickCount - *v5 < 0x1388 )
          goto LABEL_8;
        *v5 = TickCount;
      }
      if ( GamingOverlayExperienceManager::ProcessControllerInput(
             (GamingOverlayExperienceManager *)this,
             v4,
             (bool *)v13 + (unsigned int)v4,
             (unsigned int *)&v15 + v4) )
      {
        v2 = 1;
      }
LABEL_8:
      v4 = (unsigned int)(v4 + 1);
      ++v3;
      ++v5;
    }
    while ( (unsigned int)v4 < 4 );
    if ( v2 )
    {
      v7 = 20;
      goto LABEL_19;
    }
    v7 = 5000;
    v8 = v13;
    v9 = 0;
    v10 = v14;
    while ( 2 )
    {
      if ( *v8 )
      {
LABEL_16:
        ++v9;
        ++v8;
        ++v10;
        if ( v9 >= 4 )
          goto LABEL_19;
        continue;
      }
      break;
    }
    v11 = TickCount - *v10;
    if ( v11 < 0x1388 )
    {
      if ( v7 >= 5000 - v11 )
        v7 = 5000 - v11;
      goto LABEL_16;
    }
    v7 = 0;
LABEL_19:
    result = WaitForSingleObject(this[36], v7);
  }
  while ( result );
  return result;
}
