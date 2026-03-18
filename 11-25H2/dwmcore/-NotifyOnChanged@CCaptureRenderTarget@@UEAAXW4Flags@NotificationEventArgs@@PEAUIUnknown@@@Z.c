/*
 * XREFs of ?NotifyOnChanged@CCaptureRenderTarget@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180223390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::NotifyOnChanged(_DWORD *a1, unsigned int a2, __int64 a3)
{
  if ( a3 )
    *((_BYTE *)a1 + 2940) = 1;
  return CResource::NotifyOnChanged(a1, a2, a3);
}
