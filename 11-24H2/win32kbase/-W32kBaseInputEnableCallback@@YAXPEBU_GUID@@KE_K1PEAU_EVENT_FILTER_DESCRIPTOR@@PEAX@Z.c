/*
 * XREFs of ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140148C80
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x140148CA0 (W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 */

void __fastcall W32kBaseInputEnableCallback(const struct _GUID *a1, int a2)
{
  if ( (unsigned int)(a2 - 1) <= 1 )
    W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(a1);
}
