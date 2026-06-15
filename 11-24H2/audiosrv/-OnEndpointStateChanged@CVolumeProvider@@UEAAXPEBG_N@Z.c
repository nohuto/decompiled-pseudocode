/*
 * XREFs of ?OnEndpointStateChanged@CVolumeProvider@@UEAAXPEBG_N@Z @ 0x180116760
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f8e4fcbe2b76ea049fc019bd31ddd87a_::operator() @ 0x180116688 (_lambda_f8e4fcbe2b76ea049fc019bd31ddd87a_--operator().c)
 */

void __fastcall CVolumeProvider::OnEndpointStateChanged(CVolumeProvider *this, const unsigned __int16 *a2, char a3)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  const unsigned __int16 *v4; // [rsp+48h] [rbp+10h] BYREF
  char v5; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v5 = a3;
    v4 = a2;
    v3[0] = &v4;
    v3[1] = &v5;
    lambda_f8e4fcbe2b76ea049fc019bd31ddd87a_::operator()((CEndpointStoreCache *)v3);
  }
}
