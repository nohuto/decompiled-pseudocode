/*
 * XREFs of ACPIPepWorker @ 0x1400C0F90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIPepEpmNotify @ 0x1400A1250 (ACPIPepEpmNotify.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1400B9DA0 (ACPIPepPlatformEntryExitNotify.c)
 *     ACPIPepGetNextPlatformNotification @ 0x1400BE1B4 (ACPIPepGetNextPlatformNotification.c)
 */

void __fastcall ACPIPepWorker(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v2; // rdi
  int v5; // esi
  int v6; // eax
  int v7; // esi
  char v8[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-1Ch] BYREF
  __int128 InputBuffer; // [rsp+38h] [rbp-18h] BYREF

  v9 = 0;
  v2 = (struct _FAST_MUTEX *)(a1 + 184);
  v8[0] = 0;
  InputBuffer = 0LL;
LABEL_4:
  ExAcquireFastMutex(v2);
  while ( ACPIPepGetNextPlatformNotification(a1, &v9, v8) )
  {
    v5 = v9;
    v6 = *(_DWORD *)(a1 + 244);
    if ( _bittest(&v6, v9) )
    {
      ExReleaseFastMutex(v2);
      ACPIPepPlatformEntryExitNotify(a1, v5, v8[0]);
      goto LABEL_4;
    }
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 280) )
      *(_BYTE *)(a1 + 280) = 0;
    v7 = *(_DWORD *)(a1 + 268);
    if ( *(_DWORD *)(a1 + 264) == v7 )
      break;
    if ( *(_BYTE *)(a1 + 257) )
    {
      ExReleaseFastMutex(v2);
      ACPIPepEpmNotify(a1, v7);
      ExAcquireFastMutex(v2);
      *(_DWORD *)(a1 + 264) = v7;
    }
  }
  if ( *(_BYTE *)(a1 + 281) )
  {
    DWORD2(InputBuffer) = 0;
    *(_BYTE *)(a1 + 281) = 0;
    LODWORD(InputBuffer) = 40;
    BYTE12(InputBuffer) = 0;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
  }
  ExReleaseFastMutex(v2);
  if ( (a2 & 1) != 0 )
    KeSetEvent((PRKEVENT)(a1 + 344), 0, 0);
}
