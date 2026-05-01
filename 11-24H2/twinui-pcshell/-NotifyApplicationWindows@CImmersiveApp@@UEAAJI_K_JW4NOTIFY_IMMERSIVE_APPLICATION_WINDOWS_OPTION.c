/*
 * XREFs of ?NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z @ 0x180303F50
 * Callers:
 *     <none>
 * Callees:
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x1803009AC (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_0758695e4094b81417177289bdc77534___.c)
 */

__int64 __fastcall CImmersiveApp::NotifyApplicationWindows(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  BOOL v17; // [rsp+40h] [rbp-18h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0;
  if ( *(_QWORD *)(a1 + 368) )
  {
    v15 = a5;
    v12 = a2;
    v13 = a3;
    v17 = a6 != 0;
    v14 = a4;
    v16 = a6;
    CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___(
      a1 + 200,
      (__int64)&v12);
  }
  else
  {
    v10 = -2147019873;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v10;
}
