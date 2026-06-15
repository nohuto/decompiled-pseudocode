/*
 * XREFs of ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x14001BCBC
 * Callers:
 *     ??0?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUEventRegistrationTokenEqual@1Devices@Media@4@Upermission@01234@@Z @ 0x14001B600 (--0-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows.c)
 * Callees:
 *     <none>
 */

XWinRT::ComLock *__fastcall XWinRT::ComLock::ComLock(XWinRT::ComLock *this)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v4 = 0;
  if ( CoGetApartmentType((APTTYPE *)&v5, (APTTYPEQUALIFIER *)&v4) >= 0 )
  {
    v2 = v5;
  }
  else
  {
    v2 = 1;
    v5 = 1;
  }
  if ( v2 == 3 || !v2 )
  {
    *(_DWORD *)this = 1;
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    *(_DWORD *)this = 0;
    InitializeSRWLock((PSRWLOCK)this + 1);
  }
  return this;
}
