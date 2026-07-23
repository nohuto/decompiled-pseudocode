/*
 * XREFs of ExIsMultiSessionSku @ 0x1407B7F88
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x14065E514 (ApiSetResolveToHost.c)
 *     ExpGetNumberOfInitialSessionsFromRegistry @ 0x1407B80C8 (ExpGetNumberOfInitialSessionsFromRegistry.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A11520 (PsQueryCurrentApiSetSchema.c)
 */

__int64 __fastcall ExIsMultiSessionSku(char *a1)
{
  int NumberOfInitialSessionsFromRegistry; // eax
  int v3; // ecx
  __int64 CurrentApiSetSchema; // rax
  char v5; // al
  _QWORD v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF
  char v9; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF

  v7[0] = 4587588LL;
  v7[1] = L"ext-ms-win-session-wtsapi32-l1-1-0";
  v9 = 0;
  v8 = 0LL;
  v10 = 0;
  NumberOfInitialSessionsFromRegistry = ExpGetNumberOfInitialSessionsFromRegistry(&v10);
  v3 = NumberOfInitialSessionsFromRegistry;
  if ( NumberOfInitialSessionsFromRegistry >= 0 )
  {
    if ( v10 <= 1 )
    {
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema((unsigned int)NumberOfInitialSessionsFromRegistry);
      v3 = ApiSetResolveToHost(CurrentApiSetSchema, (unsigned __int16 *)v7, 0LL, &v9, (__int64)&v8);
      if ( v3 >= 0 )
      {
        v5 = v9;
        if ( v9 && !(_WORD)v8 )
          v5 = 0;
        *a1 = v5;
      }
    }
    else
    {
      *a1 = 1;
    }
  }
  return (unsigned int)v3;
}
