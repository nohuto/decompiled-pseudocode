/*
 * XREFs of ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14009E198
 * Callers:
 *     ReadRawMouseThrottlingThresholds @ 0x14009E160 (ReadRawMouseThrottlingThresholds.c)
 * Callees:
 *     _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x14009E898 (_lambda_39f407e4fe10312c322b3b59a6fe001c_--operator().c)
 */

void __fastcall CMouseSensor::ReadRawMouseThrottlingThresholds(CMouseSensor *this, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING **v3; // [rsp+30h] [rbp+8h] BYREF
  struct _UNICODE_STRING *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = &v4;
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1344);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1368);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1392);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1416);
  *((_QWORD *)this + 181) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 350) / 0x3E8;
  *((_QWORD *)this + 182) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 356) / 0x3E8;
}
